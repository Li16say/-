#include<stdio.h>
#include<string.h>
#define maxn 105
//环状串s的表示法p是否比表示法q的字典序小
int less(const char*s,int p,int q)
{
    int n= strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[(p+i)%n]!=s[(q+i)%n])
           return s[(p+i)%n]<s[(q+i)%n];//如果新的比已知的小，那么返回true
        return 0;//相等返回0
    }
}

int main()
{
    int T;
    char s[maxn];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        int ans=0;
        int n=strlen(s);
        for(int i=1;i<n;i++)
            if(less(s,i,ans))
                ans=i;//找到更小的就更新ans，使ans一直是最小的
        for(int i=0;i<n;i++)
            putchar(s[(i+ans)%n]);
        putchar('\n');
    }
    return 0;
}

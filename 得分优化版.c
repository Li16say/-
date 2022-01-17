#include<stdio.h>
#include<string.h>
#define maxn 100

char s[maxn];
int main()
{
    scanf("%s",s);
    //用a来标记连续出O的个数
    int sum=0,a=1;
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='O')
            sum+=a++;
        else
            a=1;
    }
    printf("%d",sum);
    return 0;
}

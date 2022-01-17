#include<stdio.h>
#include<string.h>
#define maxn 10000
char*s={"0123456789"};
int main()
{
    char a[maxn];
    int b[10];
    scanf("%s",a);
    int n=strlen(a);
    memset(b,0,10);
    for(int i=0;i<n;i++)
        for(int j=0;j<10;j++)
            {
                if(a[i]==s[j])
                    b[j]+=1;
            }
    for(int j=0;j<10;j++)
        printf("%d",b[j]);
    return 0;
}

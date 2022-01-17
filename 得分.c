#include<stdio.h>
#include<string.h>
#define maxn 100
int main()
{
    int d,M=0;
    char s[maxn];
    scanf("%s",s);
    int n=strlen(s);
    if(s[0]=='O')
         d=1;
    else
         d=0;
    M=d;
    for(int i=1;i<=n;i++)
    {
        if(s[i]==s[i-1]&&s[i]=='O')
            d+=1;
        else if(s[i]=='O'&&s[i]!=s[i-1])
            d=1;
        else if(s[i]!='O')
            d=0;
        M+=d;
    }
    printf("%d",M);
}

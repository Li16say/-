#include<stdio.h>
#include<string.h>
#define maxn 101
char a[maxn];
const char* b="CHON";

int main()
{
    double sum=0.0;
    double c;
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
    {
        int j=i;
        c=1.0;
        if(i+1<strlen(a) && strchr(b,a[i+1])==NULL){
            c=(a[i+1]-'1'+1)*1.0;
            i++;
        }
        switch(a[j])
        {
            case 'C':
                sum += 12.01 * c;
                break;
            case 'H':
                sum += 1.008 * c;
                break;
            case 'O':
                sum += 16.00 * c;
                break;
            case 'N':
                sum += 14.01 * c;
                break;
        }
    }
    printf("%.3f",sum);
    return 0;
}

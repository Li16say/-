#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char*rev = "A   3  HIL J O   2TUVWXY51SE Z  8 ";//���ó������飬�˴����õ��Ƕ�Ӧ�ľ����ַ�
const char*msg[] = {"not a palindrome","a regular palindrome","a mirrored string"};//���ó������飬������������Ӧ������

char r(char ch)//�Զ��庯�� �ж�ch����ĸ��������
{
    if (isalpha(ch))//���ch����ĸ
        return rev[ch-'A'];//���ض�Ӧ�ľ����ַ�
    return rev[ch-'0'+25];//���ض�Ӧ�ľ����ַ�
}

int main()//������
{
    char s[30];//������һ������
    while(scanf("%s",s)==1)//��������
    {
        int len=strlen(s);//��ȡ������ַ�������
        int p=1,m=1;
        for (int i=0;i<(len+1)/2;i++)//���ڳ��ȵ�һ����в���
        {
            if(s[i]!=s[len-1-i])//�жϵ�i���ַ��Ƿ����
                p=0;
            if(r(s[i])!=s[len-1-i])//�ж��Ƿ���
                m=0;
        }
        printf("%s--is%s.\n\n",s,msg[m*2+p]);
    }
    return 0;
}

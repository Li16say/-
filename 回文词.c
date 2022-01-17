#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char*rev = "A   3  HIL J O   2TUVWXY51SE Z  8 ";//设置常量数组，此处设置的是对应的镜像字符
const char*msg[] = {"not a palindrome","a regular palindrome","a mirrored string"};//设置常量数组，用于最后输出对应的类型

char r(char ch)//自定义函数 判断ch是字母还是数字
{
    if (isalpha(ch))//如果ch是字母
        return rev[ch-'A'];//返回对应的镜像字符
    return rev[ch-'0'+25];//返回对应的镜像字符
}

int main()//主函数
{
    char s[30];//先声明一个数组
    while(scanf("%s",s)==1)//当有输入
    {
        int len=strlen(s);//获取输入的字符串长度
        int p=1,m=1;
        for (int i=0;i<(len+1)/2;i++)//对于长度的一半进行操作
        {
            if(s[i]!=s[len-1-i])//判断第i个字符是否回文
                p=0;
            if(r(s[i])!=s[len-1-i])//判断是否镜像
                m=0;
        }
        printf("%s--is%s.\n\n",s,msg[m*2+p]);
    }
    return 0;
}

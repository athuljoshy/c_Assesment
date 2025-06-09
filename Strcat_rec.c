#include<stdio.h>

void strcat_rec(char *s1,char *s2)
{
    if(*s1=='\0')
    {
        if(*s2!='\0')
        {
            *s1=*s2;
            strcat_rec(s1+1,s2+1);
        }
    }
    else
    strcat_rec(s1+1,s2);
}

void main()
{
    char s1[]="Hello ",s2[]="World";
    strcat_rec(s1,s2);
    printf("%s\n",s1);
}

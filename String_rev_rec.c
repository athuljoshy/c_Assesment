#include<stdio.h>

void rev_string(char *s,int i,int len)
{
 char t;
 if(i<len)
 {
     t=s[i];
     s[i]=s[len];
     s[len]=t;
     rev_string(s,i+1,len-1);
 }
}
int string_len(char *s,int i)
{
    if(s[i]!='\0')
    return 1+string_len(s,i+1);
    else
    return 0;
}

void main()
{
    int i=0,len;
    char s[]="Hello world";
    len=string_len(s,i);
    rev_string(s,i,len-1);
    printf("%s\n",s);
}


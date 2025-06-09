#include<stdio.h>

int str_str(char *s,char *s1)
{
        int i,j;
        for(i=0;s[i];i++)
        {   
                if(s[i]==s1[0])
                {   
                        for(j=1;s1[j];j++)
                                if(s[j+i]!=s1[j])
                                        break;
                        if(s1[j]=='\0')
                                return 1;
                }   
        }   
        return 0;
}

void main()
{
char s[]="Hello world",s1[]="wiorld";
if(str_str(s,s1))
printf("String Found");
else
printf("String not found");
}

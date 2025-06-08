#include<stdio.h>

int str_cmp(char* s1,char* s2) 
{
        if(*s1=='\0' && *s2=='\0')
                return 0;
        else if(*s1!=*s2)
                return *s1-*s2;
        else
                return str_cmp(s1+1,s2+1);

}

void main()
{
char s1[]="Hello World",s2[]="Hello World";
int i;
i=str_cmp(s1,s2);
if(i>0)
printf("S1 is greater");
else if(i<0)
printf("S2 is greater");
else
printf("Same");
}

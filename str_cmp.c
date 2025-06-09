/* Recursion
#include<stdio.h>

int str_cmp(char *s1,char *s2)
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
char s1[]="hello world", s2[]="Hello world";
int result=str_cmp(s1,s2);
if(result==0)
printf("Both are same");
else if(result>0)
printf("S1 is bigger");
else
printf("S2 is bigger");
}
 */
#include<stdio.h>

int str_cmp(char *s1,char *s2)
{
        int i;
        for(i=0;s1[i];i++)
                if(s1[i]!=s2[i])
                        return *s1-*s2;
        if(*s1=='\0' && *s2=='\0')
        return 0;

}

void main()
{
        char s1[]="hello",s2[]="hello";
        int r=str_cmp(s1,s2);
printf("%d\n",r);
if(r==0)
printf("Both are same");
else if(r>0)
printf("S1 is bigger");
else
printf("S2 is bigger");



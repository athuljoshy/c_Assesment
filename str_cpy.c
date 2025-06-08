#include<stdio.h>

void str_cpy(char* des, char* s)
{
*des=*s;
if(*s!='\0')
str_cpy(des+1,s+1);
}

void main()
{
char s[]="Hello world",des[50];
int i,j;

printf("OG string - %s\n",s);
printf("Copy string - %s\n",des);
str_cpy(des,s);
printf("Copy string - %s\n",des);

}

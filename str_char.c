#include<stdio.h>

int str_chr(char* s,char ch) 
{
        if(*s=='\0')
        return 0;
        else if(*s==ch)
        return 1;
        else
                return str_chr(s+1,ch);
}

void main()
{
        char s[]="Hello world",ch='a';
        int i,j;

        if(str_chr(s,ch))
                printf("Character  Found\n");
        else
                printf("Not found\n");

}

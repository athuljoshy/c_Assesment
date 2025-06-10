#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
   fp= fopen("data.txt","r");
    char **p,ch;
    int i,c1=0,c=0,l=0;
    while((ch=fgetc(fp))!=EOF)
    {   
        c++;
        if(ch=='\n')
        {   
            if(c1<c)
                c1=c;
            c=0;
            l++;
        }   
    }   
    rewind(fp);
    p=malloc(sizeof(char*)*l);
    for(i=0;i<l;i++)
    {   
     p[i]=malloc(c1+1);   
    }   
    for(i=0;i<l;i++)
    {   
        if(i==2)
            continue;
        fgets(p[i],c1+1,fp);   
    }   
    fclose(fp);
    fp=fopen("data.txt","w");
    for(i=0;i<l;i++)
    {   
        if(i==2)
            continue;
        fputs(p[i],fp);  
    }   
}

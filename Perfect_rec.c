#include<stdio.h>

int perf_rec(int num,int i)
{
        if(i>num/2+1)
                return 0;
        if(num%i==0)
                return i+perf_rec(num,i+1);
        else
                return perf_rec(num,i+1);
}

void main()
{
int num=248;
if(num==perf_rec(num,1))
printf("Perfect\n");
else
printf("Not perfect\n");
}

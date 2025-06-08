#include<stdio.h>

int facto(int d)
{
        if(d==0)
                return 1;
        else
                return d* facto(d-1);
}

int strong_rec(int num)
{
        int d;
        if(num==0)
                return 0;

        d=num%10;
        return facto(d)+strong_rec(num/10);
}

void main()
{
        int num=145;
        if(strong_rec(num)==num)
                printf("Strong");
        else
                printf("Not Strong");
}

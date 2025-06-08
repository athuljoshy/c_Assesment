#include<stdio.h>

int digit_count(int num)
{
        if(num==0)
                return 0;
        return 1+digit_count(num/10);
}

int mul_(int d,int dc)
{
        if(dc==0)
                return 1;
        return d*mul_(d,dc-1);
}

int arms_sum(int num,int dc)
{
        int d;
        if(num==0)
                return 0;
        d=num%10;
        return mul_(d,dc)+arms_sum(num/10,dc);
}

int arms_rec(int num)
{
        int dc;
        if(num<0)
                return 0;
        dc=digit_count(num);
        if(num==arms_sum(num,dc))
                return 1;
        else
                return 0;
}

void main()
{
        int num =154;
        if(arms_rec(num))
                printf("Armstrong\n");
        else
                printf("Not Armstrong");
}

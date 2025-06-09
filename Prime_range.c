#include<stdio.h>
int prime_check(int num)
{
        int div=2;
        while(div<=num/2)
        {   
                if(num%div==0)
                        return 0;
                div++;
        }   
        return 1;
}

void main()
{
        int num=2;
                for(num=2;num<100;num++)
                {   
                        if(prime_check(num))
                                printf("%d ",num);

                }   
        printf("\n");
}

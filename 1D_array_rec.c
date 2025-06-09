#include<stdio.h>

void print_even(int *a,int i,int ele)
{
    if(i<ele)
    {
        if(a[i]%2==0)
        printf("%d ",a[i]);
        print_even(a,i+1,ele);
    }
}

void main()
{
    int a[]={1,3,4,5,7,5,3,2,6,8,12},i=0;
    int ele;
    ele=sizeof(a)/sizeof(a[0]);
    
    print_even(a,i,ele);
    printf("\n");
}

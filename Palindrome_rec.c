#include<stdio.h>

int rev_digit(int num,int rev)
{
if(num==0)
return rev;
return rev_digit(num/10,rev*10+num%10);
}

int pali_rec(int num)
{
  int rev;
  rev=rev_digit(num,0);
 return num==rev;
}

void main()
{
    int num=123,dc;
    if(pali_rec(num))
    printf("Palindrome");
    else
    printf("Not Palindrome");
}

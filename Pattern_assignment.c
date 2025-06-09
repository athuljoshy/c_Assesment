* 1.
#include<stdio.h>
void main()
{ int i,j,k,n;
n=4;

for(i=0;i<n;i++)
{	for(j=0;j<i+1;j++)
		printf("%d ",j+1);
	printf("\n");
}
}
*/

/* 2.
#include<stdio.h>
void main()
{ int i,j,k,n;
n=7;

for(i=0;i<n;i++)
{	for(j=0;j<i+1;j++)
		printf("%d ",j*2+2);
	printf("\n");
}
}
*/

/* 3.
#include<stdio.h>
void main()
{ int i,j,k,n;
n=9;

for(i=0;i<n;i++)
{	for(j=0;j<n-i;j++)
		printf("%d ",j+1);
	printf("\n");
}
}
*/

/* 4.
#include<stdio.h>
void main()
{ int i,j,k,n;
n=7;

for(i=0;i<n;i++)
{	for(j=0;j<n;j++)
		if(j>=i)
			printf("%d ",j*2+1);
		else
			printf("  ");
	printf("\n");
}
}
*/

/* 5.
#include<stdio.h>
void main()
{ int i,j,k,n;
n=5;

for(i=0;i<n;i++)
{	for(j=0;j<=i;j++)
		if(j%2==0)
			printf("%c ",j+65);
		else
			printf("* ");
	printf("\n");
}
}
*/

/* 6.
#include<stdio.h>
void main()
{ int i,j,k,n;
n=6 ;

for(i=0;i<n;i++)
{	for(j=0;j<n-i;j++)
		if(i%2!=0)
			printf("%d ",2*j+1);
		else
			printf("* ");
	printf("\n");
}
}
*/

/* 7.
#include<stdio.h>
void main()
{ int i,j,k,n,c;
n=8 ;

for(i=0;i<n;i++)
{	for(j=0,c=65,k=1;j<n-i;j++)
		if(j%2==0)
			printf("%c ",c++);
		else
			printf("%d ",k++);
	printf("\n");
}
}
*/

/* 8.
#include<stdio.h>
void main()
{ int i,j,k,n,c;
n=7 ;

for(i=0;i<n;i++)
{	for(j=0;j<=i;j++)
		if(i%2==0)
			printf("%d ",n-j);
		else
			printf("* ");
	printf("\n");
}
}
*/

/* 9.
#include<stdio.h>
void main()
{ int i,j,k,n,c;
n=9 ;

for(i=0;i<n;i++)
{	for(j=0,c=1;j<n;j++)
		if(j<n-i-1)
			printf("  ");
		else
		 {	if(i%2==0)
			printf("%c ",65+j);
			else
			printf("%d ",c++);
		 }
		
		
	printf("\n");
}
}

*/

/* 10.

#include<stdio.h>
void main()
{ int i,j,k,n,c;
n=7 ;

for(i=0;i<n;i++)
{	for(j=0,c=65;j<n;j++)
		if(j<n-i-1)
			printf("  ");
		else
		 {	if(i%2==0)
			printf("# ");
			else
			printf("%c ",c++);
		 }
		
		
	printf("\n");
}
}

*/


/* 11.
#include<stdio.h>
void main()
{
int i,j,k;

for(i=0;i<5;i++)
{
	for(j=0,k=1;j<=4;j++)
	        if(j==4-i)
		printf("* ");
		else
		printf("%d ",j+1);
	printf("\n");
}
}	

*/

/* 12
#include<stdio.h>
void main()
{
int i,j,k;

for(i=0;i<5;i++)
{
	for(j=0,k=1;j<5;j++)
	        if(j<i)
		printf("* ");
		else
		printf("%d ",j+1);
	printf("\n");
}
}	

*/

/* 13
#include<stdio.h>
void main()
{
int i,j,k,c;

for(i=0;i<5;i++)
{
	for(j=0,c=i+1,k=0;j<=i;j++)
	if(j==0)
	printf("%d ",i+1);
	else	
	printf("%d ",c=c+5-j);
	printf("\n");
}}
*/

/* 14
#include<stdio.h>
void main()
{
int i,j,k,c;

for(i=0;i<5;i++)
{
	for(j=0;j<2*i+1;j++)
	
	
	printf("%d",j+1);


	

printf("\n");	
}
}
*/

/* 15.
#include<stdio.h>
void main()
{
int i,j,k,c;

for(i=0;i<5;i++)
{
	for(j=0,c=1;j<i+1;j++)
	
	
	printf("%d ",c=c+j);


	

printf("\n");	
}
}
*/

/* 16
#include<stdio.h>
void main()
{
int i,j,k,c;

for(i=0;i<6;i++)
{
	for(j=0,c=1;j<6-i;j++)
	
	
	printf("%d ",c=c+j);


	

printf("\n");	
}
}
*/



/*  17.
#include<stdio.h>
void main()
{ int i,j,k,n,num;
for(i=0;i<5;i++)
  {	num=2;
	for(j=0;j<=i;j++)
		for(n=num;;n++)
		
		{	for(k=2;k<n;k++)
			if(n%k==0)
			break;
			if(k==n){
			printf("%d ",n);
			num=n+1;
			break; }
		}
	printf("\n");
  }
}
*/

/* 18.
#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<5;i++)
{	
	for(j=0;j<4-i;j++)
		printf("  ");

	for(k=0;k<=i;k++)
		printf("%d ",((k+1)*(k+1)));
printf("\n");
}
}
*/

/* 19.
#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<5;i++)
{	
	for(j=0;j<4-i;j++)
		printf("  ");

	for(k=0;k<=i;k++)
		printf("%c ",90-k);
printf("\n");
}
}
*/

/* 20.
#include<stdio.h>
void main()
{ int i,j,k;

for(i=0;i<4;i++)
{	
	for(j=0;j<7/2-i;j++)
	printf("  ");
	
	for(k=0;k<2*i+1;k++)
	printf("%c ",90-k);

	printf("\n");
}
}
*/

/* 21
#include<stdio.h>
void main()
{
int i, j, k;

for(i=0;i<4;i++)
 {	
	for(j=0;j<i;j++)
	printf("  ");
	
	for(k=0;k<7-2*i;k++)
	printf("%c ",80+k);
 
	printf("\n");
 }
}
*/

/* 22.
#include<stdio.h>
void main()
{ int i,j,k;

for(i=0;i<5;i++)
{
	for(j=0;j<i;j++)
		printf(" ");
	for(k=0;k<5-i;k++)
	 {	if(i%2==0)
			printf("* ");
		else
			printf("%d ",5-i-k);
	  }
	printf("\n");
}
}
*/

/* 23.
#include<stdio.h>
void main()

{int i,j,k;

for(i=0;i<4;i++)
{ 
	for(j=0;j<i;j++)
		printf("  ");
	
	for(k=0;k<4-i;k++)
		if(i%2==0)
			printf("%d ",4-i-k);
		else
			printf("%c ",65+k);
	printf("\n");
}
}
*/
/*
#include<stdio.h>
void main()
{ int i,j,k,n;

for(i=0;n=1+(i*2), i<4;i++)
 {	
	for(j=0;j<i;j++)
		printf("  ");

	for(k=0;k<4-i;k++)
	 {	printf("%d ",n);
	 	n=n+2;
	  }

	printf("\n");
 }
}



#include<stdio.h>
void main()
{
int i,j,k,n;
for(i=0;i<4;i++)
{	
	for(j=0;j<=4-i;j++)
		printf("  ");
	
	n=(i*(i+1))/2 +1	;
		
	for(k=0;k<=i;k++)
		printf("%d ",n+i-k);
printf("\n");
}
}

*/

/* 24.
#include<stdio.h>
void main()
{ int i,j,k;

for(i=0;i<5;i++)
 {	for(j=0;j<5;j++)
		if(j<4-i)
			printf("  ");
		else
			printf("%c ",65+i);
	printf("\n");
 }
} 
*/

/* 25.
#include<stdio.h>
void main()
{ int i,j,k,n;

for(i=0;i<6;i++)
 {	for(j=0;j<i;j++)
		printf(" ");

		
	for(k=0,n=i;k<6-i;k++,n++)
		printf("%c ",65+5-n);

	printf("\n");
 }
} 
*/


/*26.
#include<stdio.h>
void main()
{ int i,j,k,l,n,r;
r=5;

for(i=0;i<r;i++)
 {	for(j=0;j<r-1-i;j++)
		printf("  ");

	for(k=0;k<=i;k++)
		printf("%d ",k+i+1);

	for(n=0;n<i;n++)
		printf("%d ",k+i-n-1);

	printf("\n");
 }
}	
*/


/* 27.
#include<stdio.h>
void main()
{ int i,j,k,l,n,r;
r=5;

for(i=0;i<r;i++)
 {	for(j=0;j<r-1-i;j++)
		printf("  ");
	for(k=0;k<2*i+1;k++)
		printf("%c ",65+2*i-k);
	printf("\n");
 }
}
*/

/* 28.
#include<stdio.h>
void main()
{ int i,j,k,l,n,r;

r=5;

for(i=0;i<r;i++)
{	for(j=0;j<r;j++)
		if(i==0 || i==r-1 || j==0 || j==r-1)
			printf("*");
		else
		printf(" ");
	printf("\n");
}
}
*/

/* 28.
#include<stdio.h>
void main()
{ int i,j,k,l,n,r;

r=7;

for(i=0;i<r;i++)
{	for(j=0;j<r;j++)
		if(i==0 || i==r-1 || j==0 || j==r-1 )
			printf("*");

		else
			printf(" ");
	printf("\n");
}
}

*/

/* 29.
#include<stdio.h>
void main()
{ int i,j,k,l,n,r;

r=4;

for(i=0;i<r;i++)
{	for(j=0;j<r-1-i;j++)
		printf(" ");
	
	for(k=0;k<2*i+1;k++)
		printf("*");
	
	printf("\n");
}
}
*/

/* 30
#include<stdio.h>
void main()
{ int i,j,k,l,n,r;

r=9 ;

for(i=0;i<r/2+1;i++)
{	for(j=0;j<r/2-i;j++)
		printf(" ");	
	
	for(k=0;k<=i;k++)
		printf("%c ",65+k);

	printf("\n");
}

for(i=0;i<r/2;i++)
{	for(j=0;j<=i;j++)
		printf(" ");	
	
	for(k=0;k<r/2-i;k++)
		printf("%c ",65+k);

	printf("\n");
}

}

*/

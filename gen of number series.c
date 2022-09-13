#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("enter the range of n:");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
	sum=sum+i;
}
printf("sum of first %d even numbers is %d",n,sum);
return 0;
}

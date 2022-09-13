#include<stdio.h>
#include<math.h>
void main()
{
	int n,i=0,r,s=0;
	printf("Enter the octal number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s+r*pow(8,i);
		n=n/10;
		i++;
	}
	printf("%d",s);
}

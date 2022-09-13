#include<stdio.h>
void main()
{
	int n,i,s=0;
	printf("Enter no:of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+(i*i*i);
	}
	printf("Summing up of cube numbers:%d",s);
}

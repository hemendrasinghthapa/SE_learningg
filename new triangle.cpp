#include<stdio.h>

main()
{
	int i,j,k,m,n,o,p,q;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf(" ");
		for(m=1;m<=i;m++)
		{
			printf("*");
		}
		printf("\n");
	}
		printf("\n");
	
	for(n=1;n<=5;n++)
	{
		for(o=1;o<=n;o++)
		{
			printf(" ");
		}
		for(p=5;p>=n;p--)
		{
			printf("*");
		}
		printf(" ");
		for(q=5;q>=n;q--)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

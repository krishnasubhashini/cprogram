#include<stdio.h>
void main()
{
	int n,i,j,c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<i/2;j++)
			{
				if(i%j==0)
				{
					c++;
				}
			}
			if(c==0)
			{
				printf("\t%d",i);
			}
		}
	}
}

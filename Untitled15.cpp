#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=n-i-1;s>0;s--)
		{
			printf(" ");
		}
		for(int j=0;j<n;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return(0);
}

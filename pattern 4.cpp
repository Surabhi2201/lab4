#include<stdio.h>
int main()
/*{
 int n;
 scanf("%d",&n);
 for(int i=n;i>0;i--)
 {
 	for(int s=0;s<4;s++)
 	{
 	 printf(" g");
	 }
	for(int j=0;j<i;j++)
	{
	 printf("*");
	}
	printf("\n");
 }
 return(0);
}*/

{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<n-i-1;s++)
		{
		 printf(" ");
		}
		for(int j=0;j<i;j++)
		{
		 printf("*");
		}
	 printf("\n");
	}
	return(0);
}


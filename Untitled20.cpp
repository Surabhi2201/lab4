#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
 	for(int j=0;j<i;j++)
 	{
 		printf("*");
	 }
	for(int s=0;s<=2*n-2*i-2;s++)
	{
		printf(" ");
	 } 
	 for(int j=0;j<i;j++)
 	{
 		printf("*");
	 }
	 printf("\n");
	 
 }
 for(int i=n;i>n;i--)
 {
 	for(int j=0;j<i;j++)
 	{
 		printf("*");
	 }
	for(int s=0;s<=2*n-2*i-2;s++)
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

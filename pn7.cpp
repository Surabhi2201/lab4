#include<stdio.h>
int main()
{
int k,n;
printf("Enter the rows:");
scanf("%d",&n);
printf("Enter the number:");
scanf("%d",&k);
for(int i=0;i<n;i++)
{
for(int j=0;j<i+1;j++)
{
 printf("%d",k);
}
k++;
printf("\n");
}
k--;
for(int i=n;i>0;i--)
{
for(int j=0;j<i;j++)
{
 printf("%d",k);
}
k--;
printf("\n");
}
return(0);
}

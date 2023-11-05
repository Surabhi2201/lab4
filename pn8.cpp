#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<i+1;j++)
  {
  
  printf("%d",i+1);
  if(i!=j) 
  {
  	printf("*");
   } 
  else
   printf(" ");
  }
  
  printf("\n");
 }
 for(int i=n;i>=1;i--)
 {
  for(int j=0;j<i;j++)
  {
  
  printf("%d",i);
  if(i-1==j)
  {
  	printf(" ");
   } 
  else
   printf("*");
  }
  
  printf("\n");
 }
 return(0);
}

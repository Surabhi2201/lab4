#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int k=1;
 for(int i=0;i<n;i++)
 {
  for(int j=i+1;j<2*(i+1);j++)
  {
  	printf("%d ",k);
  	k++;
  }
  printf("\n");
 }
 return(0);
}

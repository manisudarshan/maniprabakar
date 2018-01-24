#include<stdio.h>
int main()
{
int n[7]={7,6,5,4,3,2,1},i,sum=0,k;
  printf("Enter the value of k");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    sum=sum+n[i];
  }
  printf("The num is %d",sum);
return 0;
}

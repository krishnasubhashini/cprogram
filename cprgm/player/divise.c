#include<stdio.h>
int main()
{
  int n,i,c=0;
  printf("enter the number:");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      c++;
    }
  }
  if(c>0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}

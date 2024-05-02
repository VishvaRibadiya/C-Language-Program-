#include <stdio.h>

int dointrest(int p,int t,int r);

int main() 
{
  int p,t,r;
  
  printf(" Enter the value of P:");  // Money
  scanf("%d",&p);
  printf("Enter the value of T:");   // Time
  scanf("%d",&t);
  printf("Enter the value of R:");   // Rate
  scanf("%d",&r);
  
  int sum=dointrest(p,t,r);
  printf(" Your ans is :%d",sum);
  return 0;
}

int dointrest(int p,int t,int r)
{
    return (p*t*r)/100;
}
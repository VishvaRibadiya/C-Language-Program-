#include <stdio.h>

int main() 
{
  int i,j,s,n;
  printf(" Enter the number: ");
  scanf("%d",&n);
  
  for(i=n;i>=1;i--)     /// row
  {
      for(s=n;s>i;s--)
      {
          printf(" ");
      }
      for(j=1;j<=i;j++)
      {
          printf("*");
      }
      printf("\n");
  }
   

    return 0;
}
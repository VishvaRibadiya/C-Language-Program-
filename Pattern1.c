#include <stdio.h>

int main() 
{
  int i,j,s,n;
  printf(" Enter the number: ");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)     /// Row
  {
      for(s=1;s<n;s++)   // Space
      {
          printf(" ");
      }
      for(j=1;j<=i;j++)   // Column
      {
          printf("*");
      }
      printf("\n");
  }
   

    return 0;
}
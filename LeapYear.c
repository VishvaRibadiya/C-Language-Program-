#include <stdio.h>

int main() 
{
  int i,n;
 
  printf("Enter number of year:");
  scanf("%d",&n);
  
   if(n%4==0)
   {
       printf("This is leap year ");
   }
   else
   {
       printf("This is not leap year");
   }
   
   
    return 0;
}
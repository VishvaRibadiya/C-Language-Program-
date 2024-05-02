#include <stdio.h>

int main() 
{
  int i,n,total=1;
   
     printf("Enter the factorial number:");
     scanf("%d",&n);
     
     
     for(i=0;i<=n;i++)
     {
         printf("%d ",total); 
         total*=2;
         
        
     }

    return 0;
}
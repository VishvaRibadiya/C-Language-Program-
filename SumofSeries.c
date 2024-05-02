   // Sum of Seriese 1+2+3+4+...

#include <stdio.h>

int main()
{
    int i,n,sum=0;
    
    printf("Enter the number for doing sum:");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
       sum=sum+i;
      
       
    }
   printf(" Your sum is :%d",sum);

    return 0;
}
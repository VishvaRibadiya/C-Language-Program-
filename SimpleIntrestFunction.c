#include <stdio.h>
#include<math.h>

void main()
{
    void intrest();
    intrest();
}
 
void intrest()
{
    int p,t,r;
    float total;
    printf("\n Enter p:");    // money 
    scanf("%d",&p);
    printf("\n Enter T:");    // time
    scanf("%d",&t);
    printf("\n Enter R:");    // rate
    scanf("%d",&r);
    
    total=p*t*r/100;
    printf("your intrest is:%f",total);
    
} 
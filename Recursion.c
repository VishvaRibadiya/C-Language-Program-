#include <stdio.h>

 int dosum(int a,int b);

int main() 
{
    int a,b;
    
    printf("Enter value of A:");
    scanf("%d",&a);
    
    printf("Enter value of B:");
    scanf("%d",&b);
    
    int sum = dosum(a,b);
    printf("Sum is: %d\n",sum);
    return 0;
}

int dosum(int a , int b)
{
    return a+b;
}
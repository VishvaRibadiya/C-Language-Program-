#include<stdio.h>

int main()
{
    int num;

    printf("\n Enter the value :");
    scanf("%d",&num);

    if(num % 2==0)
    {
        printf("\n This is Even number...");
    }
    else
    {
        printf("\n this is the Odd number...");
    }

    return 0;
}
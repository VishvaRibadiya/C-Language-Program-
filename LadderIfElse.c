#include<stdio.h>

int main()
{
    int num;

    printf("\n Enter the value: ");
    scanf("%d",&num);

    if(num < 0)
    {
        printf("\n This is Negative number....");
    }
    else if(num > 0)
    {
        printf("\n This is positive number....");
    }
    else
    {
        printf("\n This is Null number....");  
    }

    return 0;
}
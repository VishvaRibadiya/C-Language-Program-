#include<stdio.h>

int main()
{
    int marks;

    printf("\n Enter your marks:");
    scanf("%d",&marks);

    if(marks<33)
    {
        printf("\n You are fail in exam..Better luck for next attemp..");
    }

    return 0;
}
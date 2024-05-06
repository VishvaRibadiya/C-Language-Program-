// Area of Triangle

#include<stdio.h>
#include<math.h>

int main()
{
    int b,h,area;
    

    printf("\n Enter the value of B:");
    scanf("%d",&b);

    printf("\n Enter the value of H:");
    scanf("%d",&h);

    area = 0.5*b*h;
    printf("\n Your area is: %d",area);

    return 0;

}
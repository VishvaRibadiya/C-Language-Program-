 // make Calculator using Switch case

#include<stdio.h>
int main()
{
    int a,b,num;
    float value;

    printf(" \n ***** Calculator*****");
    printf(" \n 1.Addtion...");
    printf(" \n 2.Subtraction...");
    printf(" \n 3.Multiplication...");
    printf(" \n 4.Divide...");

    printf("\n Enter the value of A:");
    scanf("%d",&a);

    printf("\n Enter the value of B:");
    scanf("%d",&b);

    printf("\n Enter your choice:");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
        
        value=a+b;
        printf("\n Your ans is:%f",value);
        break;

        case 2:
        
        value=a-b;
        printf("\n Your ans is:%f",value);
        break;

        case 3:
        
        value=a*b;
        printf("\n Your ans is:%f",value);
        break;

        case 4:
        
        value=a/b;
        printf("\n Your ans is:%f",value);
        break;

        case 5:
        
        printf("\n Invalid Choice...");
        break;
    }
}
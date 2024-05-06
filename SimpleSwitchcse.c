#include<stdio.h>

int main()
{
    int n;

    printf("\n Enter the number:");
    scanf("%d",&n);

    switch(n)
{
    case 1:
    printf("\n lotus...");
    break;
    
    case 2:
    printf("\n Rose...");
    break;

    case 3:
    printf("\n Lilly...");
    break;

    case 4:
    printf("\n Champo...");
    break;

    case 5:
    printf("\n Sunflower...");
    break;

    default:
    printf("\n Invalid Choice...");
    break;
    
    return 0;
}

}
// Make a result using Ladder if...else..

#include<stdio.h>
#include<conio.h>

int main()

{
    int guj,maths,hind,eng,total;
    float per;

    printf("\n Enter the marks of Gujarati :");
    scanf("%d",&guj);

    printf("\n Enter the marks of Hindi :");
    scanf("%d",&hind);

    printf("\n Enter the marks of Maths :");
    scanf("%d",&maths);

    
    printf("\n Enter the marks of English:");
    scanf("%d",&eng);


    total=guj+hind+maths+eng;
    printf("\n Your total is :%d",total);

    per=total/4;
    printf("\n Your percentage is :%f",per);

    if(per < 33)
    {
        printf("\n You are fail...");
    }
    else if(per <= 43)
    {
        printf("\n You have F grade...");
    }
    else if(per <= 53)
    {
        printf("\n You have E grade...");
    }
    else if(per <= 63)
    {
        printf("\n You have D grade...");
    }
    else if(per <= 73)
    {
        printf("\n You have C grade...");
    }
    else if(per <= 83)
    {
        printf("\n You have B grade...");
    }
    else if(per <= 93)
    {
        printf("\n You have A grade...");
    }
    else
    {
        printf("\n You have A+ grade...");
    }
    
    return 0;
}

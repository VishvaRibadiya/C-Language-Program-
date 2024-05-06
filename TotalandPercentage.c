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

    return 0;

}
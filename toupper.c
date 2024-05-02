   // for upper case

#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
char c;
printf(" Enter a character:");
scanf("%c",&c);


printf(" The uppercase of  %c is : %c  ",c,(toupper(c)));
   
return 0;
    
}
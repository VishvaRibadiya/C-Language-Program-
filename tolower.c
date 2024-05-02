    // for lower case

#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
char c;
printf(" Enter a character:");
scanf("%c",&c);

char lc = tolower(c);
printf(" The lowercase of %c is : %c \n",c,lc);
   
return 0;
    
}
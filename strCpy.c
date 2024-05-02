  // Copy String

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20]={'v','i','s','h','v','a','\0'};
    char ch2[20];
    strcpy(ch2,ch);
    printf(" value of second string is :%s",ch2);
    return 0;
    
}
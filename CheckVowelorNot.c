#include<stdio.h>

int main()
{
    char ch;
    
    printf(" Enter the alphabats:");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||
    ch=='O'||ch=='U')
    {
        printf(" This is vowel...");
    }
    else
    {
        printf(" This is not vowel...");
    }
    return 0;
}
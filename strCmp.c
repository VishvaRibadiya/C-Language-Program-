 // Strings are equal or not

#include<stdio.h>
#include<string.h>
int main()
{
   char str1[20],str2[20];
   printf("Enter the first string:");
   scanf("%s",str1);
   printf("Enter the second string:");
   scanf("%s",str2);
   
   if(strcmp(str1,str2)==0)
   {
       printf("Strings are equal");
   }
   else
   {
       printf("strings are not equal");
   }
    return 0;
    
}
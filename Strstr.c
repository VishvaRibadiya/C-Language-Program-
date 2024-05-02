#include<stdio.h>
#include<string.h>
int main()
{
   char str[100]= "Ganga is the big and holy river";
   char *sub;
   
   sub=strstr(str,"the");
   if(sub!=0)
   {
       printf("substring is:%s",sub);
   }
   else
   {
       printf("substring is not found");
   }
   
    return 0;
    
}
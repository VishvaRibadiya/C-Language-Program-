#include <stdio.h>

int main() 
{
    int i;
    for(i=1;i<=100;i++)
    {
      
        
       if(i%3==0 && i%5==0)
        {
             printf("\n %d this number divide by 3 and 5 both",i);    
        }
        else if(i%3==0)
        {
            printf("\n %d this number divide by 3 ",i);
        } 
        else if(i%5==0)
        {
            printf("\n %d this number divide by 5",i);   
        } 
        else
        {
            printf("\n %d this number not divided",i);
        }
        
        
    }   
   

    return 0;
}
#include<stdio.h>

enum simple{
    
     krina=12,vishva=67,om=78,rudra=32
};

int main()
{
    enum simple s1=vishva;
    enum simple s2=rudra;
    
    printf("%d\n",s1);
    printf("%d\n",s2);
    
    return 0;
}
#include <stdio.h>
int main()
{
    int r,a;
    printf("enter a number \n");
    scanf("%d",&a);
    
    r=a%7;
    
    printf("reminder is %d \nso,",r);
    
    if (r>0 && r<7)
    {printf("Number is not a divisible of 7");}
    else
    if (r==0)
    {printf("Number is divisible of 7");}
    
    return 0;
}

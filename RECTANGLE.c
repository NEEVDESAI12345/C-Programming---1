#include <stdio.h>

void main() 
{
    float A,P,l,b;
    printf("enter length breath\n");
    scanf("%f%f",&l,&b);
    
    
    A=l*b;
    printf("area is\n");
    printf("%.2f\n",A);
    
    
    P=2*(l+b);
    printf("perimeter is\n");
    printf("%.2f\n",P);
}

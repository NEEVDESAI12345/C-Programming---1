#include <stdio.h>

void main()
{ 
    float A,H,B;
    printf("enter the height and base of a traiangle\n");
    scanf("%f%f",&H,&B);
    
    A=(1/2.0)*H*B;
    
    printf("area of triangle is %.2f",A);
}

#include <stdio.h>

int main()
{
    float a,b,c;
    printf("enter two numbers\n");
    scanf("%f%f",&a,&b);
    
    
    c =a/b;
    printf("%.2f/%.2f=%.2f\n",a,b,c);
    
    c=a*b;
    printf("%.2f*%.2f=%.2f\n",a,b,c);
    
    c=a+b;
    printf("%.2f+%.2f=%.2f\n",a,b,c);
    
    c=a-b;
    printf("%.2f-%.2f=%.2f\n",a,b,c);
    
}

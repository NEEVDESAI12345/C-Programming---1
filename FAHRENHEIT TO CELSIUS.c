#include <stdio.h>

void main()
{
    float a,b;
    
    printf("enter temperature in fahrenheit\n");
    scanf("%f",&a);
    
    b=(5/9.0)*(a-32);
    
    printf("the temperature in celcius is %.1f°C\n",b);
    
}

#include<stdio.h>

void main()
{
float n,g,d;

printf("Enter Gross Sales:");
scanf("%f",&g);

d=0.1*g;
n=g-d;

printf("NET SALES is%f\n",n);

}

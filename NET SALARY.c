#include<stdio.h>

void main()
{
float n,g,a,d;

printf("Enter Gross Salary:");
scanf("%f",&g);

a=0.1*g;
d=0.03*g;
n=g+a-d;

printf("The net salary is:%f",n);

}

#include<stdio.h>

void main()
{
float a,t,p,c,m;

printf("Enter Marks of Physics:");
scanf("%f",&p);
printf("Enter Marks of Maths:");
scanf("%f",&m);
printf("Enter Marks of Chemistry:");
scanf("%f",&c);

t=p+c+m;
a=t/3.0;

printf(" Total Marks are:%f\n",t);
printf(" Average Marks are:%f\n",a);

}

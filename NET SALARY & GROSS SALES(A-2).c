#include <stdio.h>
int main()
{
    float g,d,N;
    printf("Enter Gross sale\n");
    scanf("%f",&g);
    
    if (g>=20000)
    {d=0.15*g;}
     else
     if (g>=10000 && g<20000)
     {d=0.10*g;}
     else
     if (g<10000)
     {d=0.05*g;}
      
      N=g-d;
      
      printf("Net salary is %.2f\n",N);
      
      return 0;
}

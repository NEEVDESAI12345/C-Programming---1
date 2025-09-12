#include <stdio.h>
int main()
{
    float g,a,d,N;
    printf("Enter Gross salary\n");
    scanf("%f",&g);
    
    if (g>10000)
    {a=0.1*g;
     d=0.03*g;}
     else
     if (g>5000 && g<=10000)
     {a=0.07*g;
      d=0.02*g;}
      
      N=g+a-d;
      
      printf("Net salary is %.2f\n",N);
      
      return 0;
}

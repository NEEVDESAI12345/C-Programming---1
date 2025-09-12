#include <stdio.h>
int main()
{
    float p,c,m,t,A;
    printf("obtain marks in physics\n");
    scanf("%f",&p);
    printf("obtain marks in chemistry\n");
    scanf("%f",&c);
    printf("obtain marks in maths\n");
    scanf("%f",&m);
    
    t=p+c+m;
    A=t/3.0;
    
    if (A>=70)
    {printf("Average is %f\n PASS with distinction ",A);}
     else
     if (A>=60 && A<70)
     {printf("Average is %f\n PASS with first class",A);}
     else
     if (A>=50 && A<60)
     {printf("Average is %f\n PASS with second class",A);}
      else
      if (A>=35 && A<50)
      {printf("Average is %f\n PASS with third class",A);}
      else
      if (A<35)
      {printf("Average is %f\n FAIL",A);}
      
      A=(p+c+m)/3.0;
      
      return 0;
}

#include<stdio.h>
int main ()
{
    int x,y,z;
    printf("enter three numbers \n");
    scanf("%d%d%d",&x,&y,&z);
   {
    if (x>y && x>z)
    {
        printf("biggest no.is %d\n",x);
    }
    else
    if (y>x && y>z)
    {
        printf("biggest no.is %d\n",y);
    }
    else
    if (z>x && z>y)
    {
        printf("biggest no.is %d\n",z);
    }
   }
   
   
   {
      if (x<y && x<z)
    {
        printf("smallest no.is %d\n",x);
    }
    else
    if (y<x && y<z)
    {
        printf("smallest no.is %d\n",y);
    }
    else
    if (z<x && z<y)
    {
        printf("smallest no.is %d\n",z);
    }  
   }
   return 0;
}

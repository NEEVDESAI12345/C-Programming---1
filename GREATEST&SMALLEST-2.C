#include<stdio.h>
int main ()
{
    int x,y;
    printf("enter two numbers \n");
    scanf("%d%d",&x,&y);
    if (x>y)
       {
           printf("the greater No. is %d\n",x);
        printf("the smaller No. is %d\n",y);
        }
    else
       {
        printf("the greater No.is %d\n",y);
        printf("the smaller2 No.is %d\n",x);
        }
    return 0;

}

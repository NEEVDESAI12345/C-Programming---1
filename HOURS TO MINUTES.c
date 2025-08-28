#include <stdio.h>

void main() 
{
    int M,H,m,s;
    
    
    printf("Enter time in hours \nAnd enter minutes");
    scanf("%d%d", &H,&M);

    
    m=60*H+M;
    s=m*60;

    
    printf("%d hours and %d minutes= %d minute(s)\nOR\n%d second(s)\n",H,M,m,s);

}

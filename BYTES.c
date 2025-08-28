#include<stdio.h>

void main()
{
float b,kb,mb,gb;

printf("Enter Bytes:");
scanf("%f",&b);

kb=b/1000.0;
mb=b/1000000.0;
gb=b/1000000000.0;
printf("Kilobytes:%.3f\n",kb);
printf("Megabytes:%.3f\n",mb);
printf("Gigabytes:%.3f\n",gb);
}

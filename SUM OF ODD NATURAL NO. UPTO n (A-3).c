#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i=i+2) {
        sum=sum+i;   
    }

    printf("Sum of first %d odd natural numbers = %d\n", n, sum);

    return 0;
}

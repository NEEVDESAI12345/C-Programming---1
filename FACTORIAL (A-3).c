#include <stdio.h>

int main() {
    int n, i, product=1;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i = n; i >= 1; i--) {
        product = product*i;   
    }

    printf(" value of %d! = %d\n", n, product);

    return 0;
}

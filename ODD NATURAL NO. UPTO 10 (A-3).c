#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The first odd natural numbers upto %d are:\n", n);

    for(i = 1; i <= n; i=i+2) {
        printf("%d\t", i);
    }

    return 0;
}

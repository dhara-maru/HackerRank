#include <stdio.h>



void main() {
    int n, temp, sum = 0, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        int d = temp % 10;
        sum += d;
        prod *= d;
        temp /= 10;
    }

    if (sum == prod) {
        printf("Spy number\n");
    } else {
        printf("Not a spy number\n");
    }

}

#include <stdio.h>

void main() {
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n; 

    
    while (temp > 0) {
        int d = temp % 10;
        sum += d;
        temp /= 10;
    }

    if (n % sum == 0) {
        printf("Harshad\n");
    } else {
        printf("Not Harshad\n");
    }
}

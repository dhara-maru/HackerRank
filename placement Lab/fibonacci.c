#include <stdio.h>

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 0, b = 1, found = 0;

    while (a <= n) {
        if (a == n) {
            found = 1;
            break;
        }
        int next = a + b;
        a = b;
        b = next;
    }

    if (found)
        printf("%d is a Fibonacci number.\n", n);
    else
        printf("%d is NOT a Fibonacci number.\n", n);
}

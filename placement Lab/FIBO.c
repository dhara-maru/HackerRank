#include <stdio.h>

void main() {
    int n = 10; 
    int a = 0, b = 1, next;

    printf("Fibonacci Series: %d %d ", a, b);

    for(int i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}

#include <stdio.h>

// Recursive function
int factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

// Iterative function
int factorialIterative(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial (recursive) of %d = %d\n", n, factorialRecursive(n));
    printf("Factorial (iterative) of %d = %d\n", n, factorialIterative(n));
}

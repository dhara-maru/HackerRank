#include <stdio.h>

void main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        printf("Enter elem for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter elem for b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {       
        for (int j = 0; j < n; j++) {
            sum += a[i] + b[j];
        }
    }

    printf("Total sum: %d\n", sum);       
}

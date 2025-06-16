#include <stdio.h>

void main() {
    int a[] = {29, 10, 14, 37, 13};
    int n = 5;
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

#include <stdio.h>

void main() {
    int a[] = {29, 10, 14, 37, 13};
    int n = 5;
    int i, j, key;

    for(i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

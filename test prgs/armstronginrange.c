#include <stdio.h>
#include <math.h>

void main() {
    int r1, r2;
    printf("Enter range : ");
    scanf("%d %d", &r1, &r2);

    for (int i = r1; i <= r2; i++) {
        int temp = i, n = i, sum = 0, d;

        while (n != 0) {
            d = n % 10;
            sum += pow(d, 3);
            n = n / 10;
        }

        if (sum == temp) {
            printf("%d\t", temp);
        }
    }
}

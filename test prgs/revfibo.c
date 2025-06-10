#include <stdio.h>
void main(){
    int n;
    printf("Enter n terms : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1]=1;
    for(i = 2; i < n; i++){

        fib[i] = fib[i-1] + fib[i-2];
    }
    for(i = n - 1; i >= 0; i--){

        printf("%d ", fib[i]);
    }

}
#include <stdio.h>
void main(){
    int n, base=1, dec=0, digit;
    printf("Enter binary number : ");
    scanf("%d", &n);

    while(n > 0){
        digit = n % 10;
        dec = dec + digit * base;
        base *= 2;
        n = n/10;
    }

    printf("decimal number is %d", dec);

}
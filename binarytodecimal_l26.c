//binary to decimal
#include <stdio.h>
void main(){
    int n, dec=0, base=1, digit;
    printf("Enter binary : ");
    scanf("%d", &n);


    while(n > 0){
        digit = n % 10;
        dec = dec + digit * base;  
        base = base *2;
        n = n/10;
    }
    printf("Decimal value = %d\n", dec);
}
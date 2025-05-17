#include <stdio.h>
void main(){
    int n,s,d;
    printf("ENter number : ");
    scanf("%d", &n);

    while(n!=1 && n!=4){
        s=0;
        while(n){
            d = n % 10;
            s += d * d;
            n = n/10;
        }
        s=n;
    }

    printf(n==1 ? "Happy" : "Not Happy");
}
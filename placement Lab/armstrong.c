
#include <stdio.h>
#include <math.h>
void main(){
    int n;
    printf("ENter a num : ");
    scanf("%d", &n);

    int sum = 0, digit, temp = n;
    while(n != 0){
        digit = n % 10;
        sum = sum + pow(digit, 3);
        n = n / 10;
    }

    if(sum == temp){
        printf("Armstromg");
    }else{
        printf("Not an Armstromg");
    }
}
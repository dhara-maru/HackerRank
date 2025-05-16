#include <stdio.h>
void main(){
    int n;
    printf("ENter number : ");
    scanf("%d", &n);

    if(n<=0){
        printf("Not ugly");
    }

    while(n % 2==0) n /= 2;
    while(n % 3==0) n /= 3;
    while(n % 5==0) n /= 5;

    if(n==1){
        printf("ugly");
    }
    else{
        printf("not ugly");
    }
}
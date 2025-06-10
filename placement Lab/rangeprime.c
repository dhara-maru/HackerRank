// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int r1, r2;
    printf("Enter starting range : ");
    scanf("%d", &r1);
    printf("Enter ending range : ");
    scanf("%d", &r2);
    
    for(int i=r1; i<=r2; i++){
        int isprime=1;
        for(int j=2; j<i;  j++){
            if(i%j==0){
                isprime=0;
                
            }
        }
        if(isprime){
            printf("%d\t", i);
        }
    }
}
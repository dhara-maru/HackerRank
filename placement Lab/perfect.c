//a number whose sum of divisors (excluding itself equals the number)
#include <stdio.h>
#include <math.h>
void main(){
    int n;
    printf("ENter a num : ");
    scanf("%d", &n);

int sum=0;
int temp=n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    
    if(temp==sum){
        printf("Perfect");
    }else{
        printf("not perfect");
    }
}
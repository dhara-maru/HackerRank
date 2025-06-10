//a number where sum of factorial of its digits equals the number itself.
#include <stdio.h>
void main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int temp=n;
    
    int sum=0;
    while(n>0){
        int d= n%10;
        int fact=1;
        for(int i=1; i<=d; i++){
            fact = fact*i;
        }
        sum = sum + fact;
        n/=10;
        
    }

    if(temp==sum){
        printf("special");
    }
    else{
        printf("Not special");
    }
    
    
}
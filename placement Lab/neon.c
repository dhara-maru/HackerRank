//a number where sum of digits of its square equals the number iteself.
#include <stdio.h>
void main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int temp=n;
    n= n*n;
     printf("Square of number is %d\n", n);
    int sum=0;
    while(n>0){
        int d= n%10;
        sum = sum+d;
        n/=10;
        
    }
    printf("Square of digits of square is %d\n", sum);
    if(temp==sum){
        printf("Neon");
    }
    else{
        printf("Not neon");
    }
    
    
}
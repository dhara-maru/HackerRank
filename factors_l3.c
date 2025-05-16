#include <stdio.h>
//recursive
void factors(int n, int i){
    if(i > n){
        return;
    }
    if(n % i==0){
        printf("%d", i);
    }
    
    factors(n , i+1);
}
void main() {
   int n;
   printf("ENter a num : ");
   scanf("%d", &n);
   
   
   factors(n, 1);

//iterative
   for(int i=1; i<=n; i++){
    if(n % i==0){
        printf("%d", i);
    }
   }
   
}
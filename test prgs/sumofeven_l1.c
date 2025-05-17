// List 1 
#include <stdio.h>

void main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int sum=0;
    for(int i=0; i<n; i++){
        if(a[i] % 2==0){
            sum = sum + a[i];
        }
    }
    
    printf("Sum of even : %d", sum);
}
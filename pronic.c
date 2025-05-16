#include <stdio.h>
void main(){
    int n;
    printf("ENter a num : ");
    scanf("%d", &n);

    int flag=0;
    for(int i=0; i * (i+1) <= n; i++){
        if(i * (i+1) == n){
            flag=1;
            break;
        }
    }

    if(flag){
        printf("pronic");
    }else{
        printf("not pronic");
    }
}


// ⚡ What’s a Pronic Number?
// A Pronic number is the product of two consecutive integers.

// Formula: n * (n + 1)

// Examples:
// 0 = 0×1
// 6 = 2×3
// 12 = 3×4
// 20 = 4×5
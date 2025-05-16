#include <stdio.h>

void main() {
   int n;
   printf("ENter a num : ");
   scanf("%d", &n);
   
   if(n & 1){
       printf("odd");
   }else{
       printf("Even");
   }
   
}

/*
🧠 Why This Works:
Every odd number has the last bit = 1

Every even number has the last bit = 0

num & 1 checks just that last bit
*/
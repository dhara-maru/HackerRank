#include <stdio.h>

void main() {
   int n;
   printf("ENter a num : ");
   scanf("%d", &n);
   
   int odd=0, even=0, d;
   while(n !=0){
       d = n % 10;
       if(d % 2 == 0){
           even++;
       }else{
           odd++;
       }
       n = n/10;
   }
   
   printf ("Odd : %d", odd);
   printf ("Even : %d", even);
}
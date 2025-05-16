#include <stdio.h>
#include <math.h>

void main() {
   int  n, count=0, divisor=1;
   printf("Enter N : ");
   scanf("%d", &n);
   int sq = n*n;
   
   int temp=n;
   while(temp){
       count++;
       temp /= 10;
       divisor *= 10;
       
   }
   
   int left = sq / divisor;
   int right = sq % divisor;
   
   if(left + right == n){
       printf("kaprekar");
   }else{
       printf("not kaprekar");
   }
   
}

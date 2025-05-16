#include <stdio.h>
#include <math.h>

void main() {
   int  n;
   printf("Enter N : ");
   scanf("%d", &n);
   
   int sq = n * n;
   int d=1;
   
   for(int i=n; i>0; i /= 10){
       d = d * 10;
   }
   
   if(sq % d == n){
       printf("automorphic");
   }else{
       printf("not automorphic");
       
   }
}

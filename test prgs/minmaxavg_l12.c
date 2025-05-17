#include <stdio.h>

void main() {
   int n, num;
   printf("ENter a num : ");
   scanf("%d", &n);
   
   int min, max;
   float sum=0;
 
 
 printf("ENter first number : ");
 scanf("%d", &num);
 min = num;
 max= num;
 sum = num;
 
 
 for(int i=2; i<=n; i++){
     printf("ENter number %d : ", i);
     scanf("%d", &num);
     
     if(num > max){
         max = num;
     }
     if(num < min){
         min = num;
     }
     
     sum = sum + num;
 }
 
 float avg = sum / n;
 printf("\nMax = %d\n", max);
    printf("Min = %d\n", min);
    printf("Average = %.2f\n", avg);
 
 
   
}


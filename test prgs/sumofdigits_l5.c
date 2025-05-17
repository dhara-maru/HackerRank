#include <stdio.h>
int sumofdigits(int n){
    if(n==0) return 0;
    return (n % 10) + sumofdigits(n/10);
}
void main() {
   int n;
   printf("ENter a num : ");
   scanf("%d", &n);
   
  int sum=0, digit;
  
  printf("sum recursive : %d\n",sumofdigits(n));
  
  //iterative
  while(n !=0){
      digit = n % 10;
      sum = sum + digit;
      n = n/10;
  }
  
  printf("SUm of digits : %d", sum);
   
}
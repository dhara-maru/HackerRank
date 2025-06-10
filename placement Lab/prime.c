// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int n;
    printf("Enter number : ");
  scanf("%d", &n);
  int prime=1;
 for(int i=2; i<n; i++){
     if(n%i==0){
         prime=0;
         break;
     }
 }
 if(prime==1){
     printf("prime");
 }else{
     printf("not prime");
 }
}
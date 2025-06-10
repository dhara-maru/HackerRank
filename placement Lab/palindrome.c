// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int n;
    printf("Enter number : ");
  scanf("%d", &n);
  
  int temp=n, rev=0;
  while(n>0){
      int d=n%10;
      rev = rev * 10 +d;
      n/=10;
      
  }
    if(temp==rev){
        printf("palindrome");
        
    }else{
        printf("Not palindrome");
    }
}
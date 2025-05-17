#include <stdio.h>
void main(){
  int n;
  printf("ENter integer : ");
  scanf("%d", &n);
  
  for(int i=31; i>=0; i--){
      int bit = (n >> i) & 1;
      if(n >> i) printf("%d", bit);
  }
}
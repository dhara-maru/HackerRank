#include <stdio.h>
#include <string.h>

void main(){
   char str[] = {"aaabbbccd"};
  int len = strlen(str);
  int count;
  for(int i=0; i<len; i++){
      count=1;
      while(str[i] == str[i+1]){
          count++;
          i++;
      }
      printf("%c%d", str[i], count);
  }
  
}
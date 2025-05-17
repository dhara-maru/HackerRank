#include <stdio.h>
#include <string.h>
void sort(char str[]){
    int i,j,temp;
    int len = strlen(str);
    
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            if(str[i] < str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
void main(){
   char str1[] = {"dog"};
   char str2[] = {"god"};
   
   sort(str1);
   sort(str2);
   
   if(strcmp(str1, str2)==0){
       printf("Anagram");
   }else{
       printf("Not anagram");
   }
}
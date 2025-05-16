// palindrome string
#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);

    int i, len, flag = 1;

    len = strlen(str);

    for(int i=0; i<len / 2; i++){
        if(str[i] != str[len - 1 - i]){
            flag = 0;
            break;
        }
    }

if(flag == 1){
    printf("palindrome str");
}else{
    printf("Not palindrome str");
}
}
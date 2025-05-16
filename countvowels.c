//count vowels and consonents
#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    printf("ENter a string : ");

    scanf("%s", str);
    int len;
    len = strlen(str);

    int vowels=0, cons=0;

    for(int i=0; i<len; i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            vowels++;
        }else{
            cons++;
        }
    }

    printf("vowels are %d", vowels);
    printf("Consonents are %d", cons);
}
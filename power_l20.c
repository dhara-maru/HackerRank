//power
#include <stdio.h>
void main(){
    int base, expo;
    printf("ENter base and exp : ");
    scanf("%d %d", &base, &expo);

    int res=1;

    for(int i=0; i<expo; i++){
        int temp=0;
        for(int j=0; j<base; j++){
            temp = temp + res;
        }
        res = temp;
    }


    printf("%d" , res);
}
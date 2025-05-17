//quotient and reminder
#include <stdio.h>
void main(){
    int a,b;
    printf("Enter a nd b : ");
    scanf("%d %d", &a,&b);

    int big = (a>b) ? a:b;
    int small = (a<b) ? a:b;

    int q=0;
    while(big >= small){
        big = big - small;
        q++;
    }

    printf("quotient : %d\n", q);
    printf("reminder : %d", big);
}
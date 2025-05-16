// palindrome number
#include <stdio.h>
void main(){
    int n;
    printf("enter a num : ");
    scanf("%d", &n);

    int temp = n;
    int digit, rev = 0;

    while(n != 0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(rev == temp){
        printf("palinndrome");
    }else{
        printf("Not a palindrome");
    }
}
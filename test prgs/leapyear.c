//leap year
#include <stdio.h>
void main(){
    int y;
    printf("ENter a year : ");
    scanf("%d", &y);

    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
        printf("Leap year");
    }else{
        printf("Not a leap year");
    }
}
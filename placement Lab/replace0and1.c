#include <stdio.h>
#include <string.h>

void main() {
    char num[] = "20000023";
    for(int i = 0; i < strlen(num); i++) {
        if(num[i] == '0') {
            num[i] = '1';
        }
    }

    printf("Number is now %s\n", num);
}

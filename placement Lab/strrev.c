#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "dhara";
    int len = strlen(str); 

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

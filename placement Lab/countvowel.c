#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "dhara";
    int con = 0;
    int v = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {
            v++;
        } else {
            con++;
        }
    }

    printf("Consonants: %d\n", con);
    printf("Vowels: %d\n", v);
}

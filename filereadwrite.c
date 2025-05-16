#include <stdio.h>
void main(){
    FILE *f = fopen("myfile.txt", "w");
    fprintf(f, "Hello");
   
    
    char ch;
    while((ch = fgetc(f)) != EOF){
        putchar(ch);
    }
   fclose(f);
}
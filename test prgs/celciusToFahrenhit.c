#include <stdio.h>
void main(){
    int c;
    printf("ENter celcius : ");
    scanf("%d", &c);
    
    float f = (c * 9/5) + 32;
    printf("Fahrenhit : %.2f", f);
  
}
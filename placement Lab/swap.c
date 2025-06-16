#include <stdio.h>

void main() {
 int a=10;
 int b=20;
 a = a + b;
b = a - b;
a = a - b;
printf("A = %d",a);
printf("B = %d",b);
}
#include <stdio.h>
void main(){
    float p,r,n;
    printf("ENter principal amount : ");
    scanf("%d", &p);
    printf("ENter rate : ");
    scanf("%d", &r);
    printf("ENter months : ");
    scanf("%d", &n);

    float emi = (p * r * (1 + r) ** n) / ((1 + r) ** n - 1);
    printf("EMI is : %d", emi);

}
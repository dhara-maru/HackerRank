#include <stdio.h>
void main(){
    int n;
     printf("Enter size : ");
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter elem : ");
        scanf("%d", &a[i]);
    }
    int sum=0;
for(int i=0; <n; i++){
    sum += a[i];
}
    print("%d", sum);
}
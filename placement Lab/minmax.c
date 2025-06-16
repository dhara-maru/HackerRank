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

    int min = a[0];
    int max = a[0];

    for(int i=0; i<n; i++){
        if(a[i]> max){
            max = a[i];
        }

        if(a[i] < min){
            min = a[i];
        }
    }

    printf("Min is %d and max is %d", min, max);
}
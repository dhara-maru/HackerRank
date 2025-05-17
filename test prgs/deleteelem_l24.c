#include <stdio.h>
void main(){
    int n=10;
    int a[]= {1,2,3,4,5,6,7,8,9,10};

    int e, found=0;
    printf("Enter elem : ");
    scanf("%d", &e);

    for(int i=0; i<n; i++){
        if(a[i] == elem){
            found=1;

            for(int j=i; j<n-1; j++){
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }

    if(!found){
        printf("elem not found");

    }else{
        for(int i=0; i<n; i++){
            printf("%d\t", a[i]);
        }
    }
}
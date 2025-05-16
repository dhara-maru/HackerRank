#include <stdio.h>
void main(){
    int n=10;
    int a[] = {1,2,3,4,5,6,7,8,9,10};

    int pos; 
    printf("ENter position : ");
    scanf("%d", &pos);

    int elem;
    printf("ENter element : ");
    scanf("%d", &elem);


    for(int i=n-1; i>pos; i--){  
            a[i] = a[i-1];
    }

    a[pos] = elem;

    //print the array again
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
}
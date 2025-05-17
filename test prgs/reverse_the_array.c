//reverse the array
#include <stdio.h>
void main(){
    int arr1[5];
    int arr2[5];

    for(int i = 0; i< 5; i++){
        printf("ENter elem : ");
        scanf("%d", &arr1[i]);
    }

    for(int i=0; i <5; i++){
        arr2[i] = arr1[4-i];
    }

    for(int i = 0; i< 5; i++){
        printf("%d", arr2[i]);
    }

}
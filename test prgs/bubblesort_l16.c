//bubble sort
#include <stdio.h>
void main(){
    int n=5;
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter : ");
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] >= arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
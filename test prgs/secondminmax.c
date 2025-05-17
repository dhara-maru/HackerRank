#include <stdio.h>
void main(){
    
    //take a sorted array or just sort it
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n=9;
    
    int min=a[0], max=a[n-1];
    int secondmin=-1, secondmax=-1;
    
    //secondmin
    for(int i=0; i<n; i++){
        if(a[i] != min){
            secondmin=a[i];
            break;
        }
    }
    
     //secondmax
    for(int i=n-2; i>=0; i--){
        if(a[i] != max){
            secondmax=a[i];
            break;
        }
    }
    
     if (secondmin != -1)
        printf("Second Smallest: %d\n", secondmin);
    else
        printf("No second smallest (all same values?)\n");

    if (secondmax != -1)
        printf("Second Largest: %d\n", secondmax);
    else
        printf("No second largest (all same values?)\n");
}
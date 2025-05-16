#include <stdio.h>
void main(){
    int a[] = {16,2,3,2,17,5,4,2};
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n; i++){
        int leader=1;
        for(int j=i+1; j<n; j++){
            if(a[i] < a[j]){
                leader=0;
                break;
            }
        }
        
        if(leader){
            printf("%d\t", a[i]);
        }
    }
}
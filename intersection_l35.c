//intersection
#include <stdio.h>
void main(){
    int a[] = {1,2,3,4,5,6,7};
    int b[] = {1,2,3,4};


    int n1=7, n2=4;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(a[i] == b[j]){
                printf("%d\t", a[i]);
                b[j] = -1;
                break;
            }
        }
    }


    
}
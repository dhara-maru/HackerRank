//sum equal to K
#include <stdio.h>
void main(){
    int a[] = {1, 5, 7, 1};
    int n=4;
    int K = 6;
    int count=0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] + a[j] == K){
                count++;
            }
        }
    }

    printf("%d", count);
}
#include <stdio.h>

void main() {
    int a[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;  // Window size

    for(int i=0; i<n-k; i++){//if 8 is array size, 8-3 = 5 go till 5
        int max= a[i];
        for(int j=1; j<k; j++){//first window
            if(a[i+j] > max){
                max = a[i+j];
            }
        }
        printf("%d\t", max);
    }
    
}

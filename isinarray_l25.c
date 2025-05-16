#include <stdio.h>
int isinarray(int a[], int n, int e){
    if(n==0) return 0;
    if(a[n-1]==e ) return 1;
    return isinarray(a, n-1, e);
}
void main(){
    int n=5;
    int a[] = {1,2,3,4,5};
    int e=3;
    if(!isinarray(a, n, e)){
        printf("Not found");
    }else{
        printf(" found");
    }
}
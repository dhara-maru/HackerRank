#include <stdio.h>
void main() {
   int n;
   printf("ENter a num : ");
   scanf("%d", &n);
   
 for(int i=1; i<=n; i++){
     for(int j=1; j<=i; j++){
         printf("%d\t", j);
     }
     printf("\n");
 }
   
}

/*
1
1 2
1 2 3
1 2 3 4
*/
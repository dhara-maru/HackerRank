#include <stdio.h>
void main(){
    int n=5;
    int num = 1;
    char ch = 'A';
    int max_width = n * 2 - 1;

    for(int i =1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            printf(" ");
        }

        if(i % 2 != 0){
            for(int j=0; j< i; j++){
                printf("%d ", num++);
            }
        }
        else{
            for(int j=0; j< i; j++){
                printf("%c ", ch++);
            }
        }

        printf("\n");
    }

    
/*
   1 
  A B 
 2 3 4 
C D E F 
*/


for(int i=n; i<=1; i--){
    for(int j=0; j<n-i; j++){
        printf("");
    }

    for(int j=0; j<i; j++){
        printf("* ");
    }

    printf("\n");
}
/*


* * * * 
 * * * 
  * * 
   * 

*/


for(int i=n; i>=1; i--){
    for(int j=0; j<i; j++){
        printf("*");
    }

    for(int j=0; j<2*(n-i); j++){
        printf(" ");
    }

    for(int j=0; j<i; j++){
        printf("*");
    }


    printf("\n");
}

/*

**********
****  ****
***    ***
**      **
*        *

*/
}

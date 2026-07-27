// n=5
// * * * * * * * * *   <= isko alag se print kren
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *

// n=n-1;
// n(new) => n-1
// nsp +=2
// nst -=2

#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    for(int i=1; i<=2*n-1; i++){        // firstline ke liye
        printf("* ");
    }
    printf("\n");
    n = n-1;

    int nst = n;
    int nsp = 1;
    for(int i=1; i<=n; i++){
            for(int j = 1; j<= nst; j++){
                printf("* ");
            }
            for(int j=1; j<=nsp; j++){
                printf("  ");
            }
            for(int j = 1; j<= nst; j++){
                printf("* ");
            }
            nsp+=2;
            nst--;
        printf("\n");
    }
    return 0;
}
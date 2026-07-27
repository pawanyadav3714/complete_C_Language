// inclinedPlane
//  i=5   
//         *
//       * *
//     * * *
//   * * * *
// * * * * *


// lowerTriangularMatrix:- i=1 i<=n & j=1 j<=n-i+1

// * * * * *
// * * * *
// * * *
// * *
// *

// upperTriangularMatrix:- i=1 i<=n & j=1 j<=i


// *
// * *
// * * *
// * * * *
// * * * * *    

// InclinedPlane => LowerTrinagular("  ") + UpperTraingular("* ")

#include<stdio.h>
int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// A B C D
// A B C D
// A B C D
// A B C D

#include<stdio.h>
int main(){

    int a = 64;
    for(int i=1; i<=4; i++){
       for(int j=1; j<=4; j++){
            printf("%c ",a+j);
       }
       printf("\n");
    }
    return 0;
}
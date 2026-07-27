// 1. // 100,97,94,..up to n terms:- including -ve values also :==> completed
// 2. // 100,97,94,..up to all +ve terms:-  


// an = a+(n-1)*d
// an = 100+(n-1)*(-3)
// an = 100+(n-1)*(-3)
// an = 103-3n;

#include<stdio.h>
int main(){
    int n=100;
    while(n>0){
        printf("%d, ",n);
        n-=3;
    }
    return 0;
}
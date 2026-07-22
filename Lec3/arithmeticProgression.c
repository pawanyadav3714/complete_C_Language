// 4,7,10,13,16,... up  to n.

#include<stdio.h>
int main(){
    int n=15;
    for(int i=4; i<=3*n+1; i+=3){
        printf("%d, ",i);
    }
    return 0;
}

// an = a+(n-1)d
//    =>4+(n-1)*3
//    =>4+3n-3
// an =>3n+1

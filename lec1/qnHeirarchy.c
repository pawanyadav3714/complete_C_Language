// int i=2, j=3,k,l
// float a,b;
// k = i/j*j;
// l = j/i*i;
// a = i/j*j;
// b = j/i*i
// find the value of k,l a,b

#include<stdio.h>
int main(){
    int i=2, j=3,k=2,l=5;
    float a,b;
    k = i/j*j;  // 2/3*3 = 0*3 => 0
    l = j/i*i;  // 3/2*2 = 1*2 => 2
    a = k/l*k;  // 0/2*0 = 0
    b = j/i*i;  // 3/2*2 = 1*2 => 2
    // printf("%d,%d,%f,%f",k,l,a,b);
    printf("%d",a);
    return 0;
}
// int a = 5, b,c;
// b = a = 15; // a = 15 not 5, b = 15;
// c = a <= 15; // if <= then c = 1 otherwise c = 0

#include<stdio.h>
int main(){
    int a = 5, b,c;
    b = a = 15; // a = 15 not 5, b = 15;
    c = a < 15; // if <= then c = 1 otherwise c = 0;

    printf("%d %d %d",a,b,c);

    return 0;
}
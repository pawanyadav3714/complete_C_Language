// 2^4 => 2*2*2*2 => 16
// a^b => a*a*a*a => 16

#include<stdio.h>
int main(){

    int a, b, value=1;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);
    
    for(int i=1; i<=b; i++){
        value = value*a;
    }
    printf("%d^%d is %d",a,b,value);
    return 0;
}
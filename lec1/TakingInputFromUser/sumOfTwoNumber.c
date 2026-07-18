// find the sum of two number taking input frm user..
#include<stdio.h>
int main(){
    int a, b, sum;
    
    printf("Enter First number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    sum = a+b;
    printf("The sum of %d+%d is %d",a,b,sum);
    return 0;
}
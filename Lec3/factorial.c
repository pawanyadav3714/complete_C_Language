// int n=6
// factorial => 1*2*3*4*5*6 => 720

#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = 1;

    for(int i=n; i>=2; i--){
        fact = fact*i;        
    }
    printf("%d",fact);
    return 0;
}
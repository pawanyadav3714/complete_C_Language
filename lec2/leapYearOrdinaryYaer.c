// leap year = n%4 == 0
// ordinary year = n%4 != 0

#include<stdio.h>
int main(){

    int n;  // n denotes year
    printf("Enter years : ");
    scanf("%d",&n);

    if(n%4 ==0){
        printf("it is a leap year");
    }
    else{
        printf("it is an ordinary year");
    }
    return 0;
}
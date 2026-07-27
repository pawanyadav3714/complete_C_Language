// enter a number : 122 ==> yes it is a three digit number..
#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n>=100 && n<=999){
        printf("YEs, it is a three digit number");
    }
    else{
        printf("It is not a three digit number");
    }
    return 0;
}
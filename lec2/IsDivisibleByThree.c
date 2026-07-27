// enter a number : 122 ==> yes it is a three digit number..
#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%3 ==0){
        printf("Yes, it is divisible by three");
    }
    else{
        printf("it is not divisible by three");
    }
    return 0;
}
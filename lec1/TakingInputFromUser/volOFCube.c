// taking input from user and find the volm of cube;

#include<stdio.h>
int main(){             // vol = a*a*a;
    int vol, a;
    printf("Enter the value of side : ");
    scanf("%d",&a);
    vol = a*a*a;
    printf("The vol of cube is %d",vol);
    return 0;
}
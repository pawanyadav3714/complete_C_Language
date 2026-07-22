#include<stdio.h>
int main(){
    int n; // n==4 composite no.
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(n%1==0 && n%n==0) {
            printf("It is a prime number\n");
            break;
        }
        else {
            printf("prime number");
            break;
        }
    }
    return 0;
}
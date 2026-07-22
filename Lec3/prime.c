#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int a;
    for(int i=1; i<=n; i++){
        if(n%i != 0){
            a = 1;
        }
    }
    if(a==1){
        printf("prime number");
    }
    else{
        printf("not a prime");
    }
    return 0;
}
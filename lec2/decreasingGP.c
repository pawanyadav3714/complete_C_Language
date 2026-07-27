// 100,50,25,... up to n terms;

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int a=100;
    for(int i=1; i<=n; i++){
        printf("%d, ",a);
        a = a/2; // a/=2
    }
    return 0;
}
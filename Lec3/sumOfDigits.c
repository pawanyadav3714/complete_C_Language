#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int r;
    int sum = 0;

    while(n>0){
       r = n % 10;
       sum = sum+r;
        n /= 10; // n = n/10

    }
    printf("Sum is %d",sum);
    return 0;
}

// 4323 step1 => 432.3  r = 3
// 4323 step2 => 43.2  r = 3 + 2
// 4323 step3 => 4.3  r = 3 + 2 + 3
// 4323 step4 => 0.4  r = 3 + 2 + 3 + 4
// 4323 step4 => 0.0  r = 3 + 2 + 3 + 4 + 0 last step/// yahan tk loop hamaara chlega

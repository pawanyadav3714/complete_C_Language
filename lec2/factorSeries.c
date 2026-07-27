// Enter a numbern: 8
// 1,2,4,8

#include<stdio.h>
int main(){

    int n; 
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(n%i == 0){
            printf("%d, ",i);
        }
    }
    return 0;
}

// n=8 :-
// i=1  step1 8%1==0 => 1
// i=2  step2 8%2==0 => 2
// i=3  step3 8%3==2 => 3 noooo
// i=4  step4 8%4==0 => 4 
// i=5  step5 8%5==3 => 5 nooo 
// i=6  step6 8%6==2 => 5 nooo 
// i=7  step7 8%7==1 => 7 nooo 
// i=8  step8 8%8==0 => 8  
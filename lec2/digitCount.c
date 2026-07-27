#include<stdio.h>
int main(){
        int x;
    printf("Enter a number : ");
    scanf("%d,",&x);
 
    int count = 0;
    while(x>0){
        x = x/10;
        count++;
    }
    printf("%d ", count);
    return 0;
}
// 31542 => step1 3154.2 count = 1
// 31542 => step2 315.42 count = 2
// 31542 => step3 31.542 count = 3
// 31542 => step4 3.1542 count = 4
// 31542 => step5 0.31542 count = 5

// 31542 => 3+1+5+4+2 => 15;
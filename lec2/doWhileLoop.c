#include<stdio.h>
int main(){

    int n=1;
    do
    {
       printf("%d, ",n);    // synchronous function
    } while (n<0);  // false condition
    

    // while(n<0){             //n=1 // 1<0
    //     printf("%d, ",n);
    //     n++;
    // }
    return 0;
}
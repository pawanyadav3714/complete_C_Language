// GIF = greatest integer function
// 14.3 = 14+0.3
// integer part = 14
// floating part/ decimal part = 0.3

// GIF = total value - floating part/ decimal
// gif = 15.4 - 0.4 = 15


#include<stdio.h>
int main(){
    float x = 16.7;
    int y = x;
    printf("The GIF of %f is %d",x,y);
    return 0;
}
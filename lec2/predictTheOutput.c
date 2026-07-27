#include<stdio.h>
int main(){

    int x = 4, y = 3, z;
    z = (x--) - y;  // 4 - 3 => 1          // now, the x = 3
    printf("%d ",z);
    return 0;
}
// x-- => post
// --x => pre
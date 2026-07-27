// int x = 3, y,z;
// y = x = 10; // x = 10 not 3, y = 10;
// z = x < 10;  // z = 0;

#include<stdio.h>
int main(){
    
    int x = 3, y,z;
    y = x = 10; // x = 10 not 3, y = 10;
    z = x < 10;  // z = 0;

    printf("%d %d %d ",x,y,z);

    return 0;
}
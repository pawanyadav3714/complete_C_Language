#include<stdio.h>
int main(){
    int x=4;
    //x--;    // pehle 4 then 3   --> perform when using another variable
    int z = x--; // using another variable // pehle use hoga bhai then updation
    printf("%d, ",z);
    return 0;
}

// 1234532 -> number of digits is 7
// 12221 -> number of digit is 5
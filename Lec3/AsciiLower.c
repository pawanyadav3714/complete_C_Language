// a => 97

// a-->97
// b-->99
// c-->100
// d-->
// e-->
// f-->
#include<stdio.h>
int main(){

    int x = 96;
    for(int i=1; i<=26; i++){
        int ch = (char)i;
        printf("%c --> %d\n",(ch+x),(i+x));
    }
    return 0;
}
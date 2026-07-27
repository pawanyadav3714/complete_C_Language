// A-->65
// B-->66
// B-->66
// B-->66
// B-->66
// B-->66
#include<stdio.h>
int main(){

    int x = 64;
    for(int i=1; i<=26; i++){
        int ch = (char)i;
        printf("%c --> %d\n",(ch+x),(i+x));
    }
    return 0;
}
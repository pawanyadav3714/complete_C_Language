// -127 = |-127| => 127
// |-127| = 127; x>0    positive
// |-127| = -127; x<0   negative
// 

#include<stdio.h>
int main(){
    int n;
    printf("Enter any value : ");
    scanf("%d",&n);

    if(n<0){
        n = -n; // -(-123)
    }

    printf("%d",n);
    return 0;
}
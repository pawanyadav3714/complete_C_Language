// print this pattern :- 3,12,48,..up to n;
// IsAp:- not
// IsGp:- 4==4 true // GP with commom ratio a2/a1 = 4

#include<stdio.h>
int main(){
    int k;
    printf("Enter the number of loop : ");
    scanf("%d",&k);
    int a = 3;
    for(int i=1; i<=k; i++){
        printf("%d, ",a);
        a=a*4;
    }
    return 0;
}

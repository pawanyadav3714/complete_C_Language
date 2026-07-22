// 1 1 2 3 5 8 13 21 34,,....  

// 1 1  2   3   5 8 13 21
//      
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : "); // jitna terms ko aap print krwana chah rhe ho
    scanf("%d",&n);

    int a=1,b=1,sum=0;

    for(int i=1; i<=n; i++){
        a = b;
        b = sum;
        sum = a+b;
               
    }
     printf("%d, ",sum);

    return 0;
}
// a, b, sum=> a+b
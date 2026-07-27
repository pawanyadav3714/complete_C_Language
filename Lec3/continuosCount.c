// upperTraingular matrix:-

// i=1 i<=n
// j=1 j<=i

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a+=1; 
        }
        printf("\n");
    }
    return 0;
}
// n=4
// i=1 step1 i<=4? true j=1            (1) 2
// i=2 step2 i<=4? true j=1,2          (2)(3) 4
// i=3 step3 i<=4? true j=1,2,3        (4)(5)(6) 7
// i=4 step4 i<=4? true j=1,2,3,4      (7)(8)(9)(10)
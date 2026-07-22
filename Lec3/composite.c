#include<stdio.h>
int main(){

    int n = 4 ;
    printf("Enter a number : ");
    scanf("%d",&n);

    int flag;
    for(int i=2; i<=n-1; i++){    //1,2,3,4
        if(n%i==0){
            flag = 1;     // composite number
        }  
    }

    if(n==0 || n==1){
        printf("Neither composite nor prime");
    }

    else if(flag==1){
        printf("It is a composite number");
    }
    else{
        printf("It is a  prime number");
    }
    return 0;
}
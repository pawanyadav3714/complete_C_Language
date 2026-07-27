// number of row => 4
// number of cols => 3


// * * *
// *   *
// *   *
// * * *
// m=4
// if(i==1 || j==1 || i==m j==n)

#include<stdio.h>
int main(){

    int m,n;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter cols number: ");
    scanf("%d",&n);

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==m || j==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }


    return 0;
}

// row (m)=> 6
// cols (n)=> 9
// if(i==1 || j==1 || i==m || j==n)
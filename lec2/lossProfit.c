// loss = cp=50, sp=30   (cp>sp)
// profit = cp=50, sp=100 (sp>cp)

#include<stdio.h>
int main(){

    int cp,sp;
    printf("Enter cp : ");
    scanf("%d",&cp);

    printf("Enter sp : ");
    scanf("%d",&sp);

    if(sp>cp){
        printf("Profit");
    }
    else if(sp==cp){
        printf("Neither loss nor profit");
    }
    else{
        printf("loss");
    }
    return 0;
}
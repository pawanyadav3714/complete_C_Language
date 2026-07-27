#include<stdio.h>
int main(){

    int x = 5;
    printf("%d\n",x);   // 5
    printf("%d\n",++x); // 6
    printf("%d\n",x++); // 6 then 7
    printf("%d\n",x);   // 7
    return 0;
}

//++x pre-increment => pehle increase krega then use hoga
//x++ post-increment => pehle use then increase.
#include<stdio.h>
int main(){

    int x = 4, y = 0, z;
    while(x>=0){
        x--;    //(4) then 3 ->  (3) then 2 ->  (2)  -> 1   (1)  then -> 0  (0) then -1
        y++;    //(0) then 1 ->  (1) then 2 ->  (2) --> 3   (3) then  -> 4   (4) then 5
        if(x==y){
            continue;   // that step must be skip
        }
        else{
            printf("\n%d, %d",x,y); // (4,0),(3,1), (1,3),(0,4)
        }
    }
    return 0;
}

// break; => loop chalna band kr dega
// continue => skip that step/iteration then continue
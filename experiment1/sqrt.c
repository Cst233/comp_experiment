#include<stdio.h>

int main(){
    int round = 7;
    int id = 12;
    int res = 0;
    while(round >= 0){
        res = res<<1;
        if((id >> round)&1==1){
            res += id;
        }
        round--;
    }
    printf("the square of %d is %d\n",id,res);
    return 0;
}

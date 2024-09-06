#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        if(x < y){puts("PROFIT");}
        else if(x == y){puts("NEUTRAL");}
        else if(x > y){puts("LOSS");}
    }   

}

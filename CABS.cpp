#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        if(x < y){puts("FIRST");}
        else if(y < x){puts("SECOND");}
        else{puts("ANY");}
    }   

}

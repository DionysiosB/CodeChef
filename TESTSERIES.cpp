#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x(0), y(0);
        for(long p = 0; p < 5; p++){
            long u; scanf("%ld", &u);
            if(u == 1){++x;}
            else if(u == 2){++y;}
        }

        if(x == y){puts("DRAW");}
        else{puts(x < y ? "ENGLAND" : "INDIA");}
    }

}

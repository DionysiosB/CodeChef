#include <cstdio>

int main(){

    long r, c; scanf("%ld %ld", &r, &c);
    for(long p = 0; p <= c; p++){
        for(long q = 0; q < r; q++){printf("U");}
        for(long q = 0; q < r; q++){printf("D");}
        printf("R");
    }
    for(long p = 0; p <= r + 1; p++){
        for(long q = 0; q < c; q++){printf("L");}
        for(long q = 0; q < c; q++){printf("R");}
        printf("U");
    }

    puts("");
}

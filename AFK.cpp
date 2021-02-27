#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long diffA = b - (a + c) / 2; if(diffA < 0){diffA = -diffA;}
        long diffB = b - (a + c + 1) / 2; if(diffB < 0){diffB = -diffB;}
        long diff = (diffA < diffB) ? diffA : diffB;
        if((a + c)% 2 != 0){++diff;}
        printf("%ld\n", diff);
    }

    return 0;
}

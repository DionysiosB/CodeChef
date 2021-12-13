#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long m, c; scanf("%ld %ld", &m, &c);
    long up(0), down(0);
    for(long p = 0; p < n; p++){
        long x, y, w; scanf("%ld %ld %ld", &x, &y, &w);
        if(y - m * x - c > 0){up += w;}
        else{down += w;}
    }

    printf("%ld\n", (up > down) ? up : down);

    return 0;
}

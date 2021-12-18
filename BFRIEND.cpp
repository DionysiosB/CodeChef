#include <cstdio>

long absv(long x){return (x > 0) ? x : (-x);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b, c; scanf("%ld %ld %ld %ld\n", &n, &a, &b, &c);
        long mn(2e9 + 7);
        for(long p = 0; p < n; p++){
            long f; scanf("%ld", &f);
            long dist = absv(f - b) + absv(f - a);
            mn = (mn < dist) ? mn : dist;
        }

        printf("%ld\n", mn + c);
    }

    return 0;
}

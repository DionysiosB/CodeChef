#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(0);
        for(long p = 1; p <= n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            res ^= p;
        }

        printf("%ld\n", res);
    }

    return 0;
}

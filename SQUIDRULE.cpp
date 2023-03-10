#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e9), sum(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            sum += x;
            mn = (mn < x) ? mn : x;
        }

        printf("%ld\n", sum - mn);
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev(0); long long total(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            total += (x > prev) * (x - prev);
            prev = x;
        }

        printf("%lld\n", total);
    }

}

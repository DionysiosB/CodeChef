#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long ans(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ans += (x > k ? (x - k) : 0);
        }
        printf("%ld\n", ans);
    }

}

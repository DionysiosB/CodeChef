#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long mn(1e9), res(-1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(k % x){continue;}
            long num = k / x;
            if(num < mn){mn = num; res = x;}
        }

        printf("%ld\n", res);
    }
}

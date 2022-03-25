#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, v; scanf("%ld %ld %ld", &n, &k, &v);
        long s(0); for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s += x;}
        long ans((v * (n + k) - s) / k);
        printf("%ld\n", ((ans > 0) && (v * (n + k) - s) == ans * k) ? ans : -1);
    }

}

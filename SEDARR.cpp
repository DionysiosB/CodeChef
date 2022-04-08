#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long s(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s += x;}
        s %= k;
        printf("%d\n", s > 0);
    }

}

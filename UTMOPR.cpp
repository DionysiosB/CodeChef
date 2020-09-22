#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int64_t n, k; scanf("%lld %lld", &n, &k);
        int64_t s(0);
        for(int64_t p = 0; p < n; p++){long x; scanf("%ld", &x); s += x;}
        puts((s % 2 == 0 && k == 1) ? "odd" : "even");
    }

    return 0;
}

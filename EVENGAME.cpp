#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long long s(0); for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s += x;}
        printf("%lld\n", 1 + (s % 2));
    }

}

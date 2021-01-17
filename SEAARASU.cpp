#include <cstdio>

long long gcd(long long a, long long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long long g(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); g = gcd(g, x);}
        printf("%lld\n", n * g);
    }

    return 0;
}

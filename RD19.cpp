#include <cstdio>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long g(0);
        while(n--){long x; scanf("%ld", &x); g = gcd(g, x);}
        puts((g == 1) ? "0" : "-1");
    }

    return 0;
}

#include <cstdio>

long gcd(long a, long b){return (a == 0) ? b : gcd(b % a, a);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, n, m; scanf("%ld %ld %ld %ld", &x, &y, &n, &m);
        long g = gcd(x, y);
        x /= g; y /= g;
        bool ans = (y <= n) && (x <= m);
        puts(ans ? "YES" : "NO");
    }

    return 0;
}

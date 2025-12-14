#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long d, c; scanf("%ld %ld", &d, &c);
        long a(0); for(long p = 0; p < 3; p++){long x; scanf("%ld", &x); a += x;}
        long b(0); for(long p = 0; p < 3; p++){long x; scanf("%ld", &x); b += x;}
        long with = c + d * ((a < 150) + (b < 150));
        long without = 2 * d;
        puts(with < without ? "YES" : "NO");
    }
}

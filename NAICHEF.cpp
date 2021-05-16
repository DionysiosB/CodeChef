#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        long f(0), s(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            f += (x == a); s += (x == b);
        }

        printf("%.7lf\n", 1.0 * f * s / n / n);
    }

    return 0;
}

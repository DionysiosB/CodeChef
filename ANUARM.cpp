#include <cstdio>
#include <complex>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long left(1e6), right(0);
        for(long p = 0; p < m; p++){
            long x; scanf("%ld", &x);
            left = (left < x) ? left : x;
            right = (right > x) ? right : x;
        }

        for(long p = 0; p < n; p++){printf("%ld ", std::max(std::abs(p - left), std::abs(p - right)));}
        puts("");
    }

    return 0;
}

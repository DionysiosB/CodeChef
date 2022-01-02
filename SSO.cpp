#include <cstdio>
#include <vector>
typedef long long ll;


int main(){

    const int N = 64;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> d(N, 0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            for(long u = 0; u < N && a > 0; u++, a /= 2){d[u] += a % 2;}
        }

        std::vector<long> f(N, 0);
        ll cur(0); for(long p = 0; p < N; p++){cur /= 2; cur += d[p]; f[p] = (cur > 0);}
        ll res(0); for(long p = N - 1; p >= 0; p--){res = 2 * res + f[p];}
        printf("%lld\n", res);
    }

}

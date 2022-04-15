#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> f(n); for(long p = 0; p < n; p++){scanf("%ld", &f[p]);}
        std::vector<long> r(n); for(long p = 0; p < n; p++){scanf("%ld", &r[p]);}
        std::vector<long> s(m + 1, 0); std::vector<bool> d(m + 1, 0);
        for(long p = 0; p < n; p++){d[f[p]] = true; s[f[p]] += r[p];}
        long res(1e9); for(long p = 1; p <= m; p++){if(d[p]){res = (res < s[p]) ? res : s[p];}}
        printf("%ld\n", res);
    }

}

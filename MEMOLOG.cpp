#include <cstdio>
#include <vector>

int main(){

    const long N = 1e6 + 7;
    std::vector<long> v(N + 7, 1);
    v[0] = v[1] = 0;
    for(long p = 2; p * p <= N; p++){
        if(!v[p]){continue;}
        for(long q = 2 * p; q <= N; q += p){v[q] = 0;}
    }

    for(long p = 1; p < v.size(); p++){v[p] += v[p - 1];}

    long q; scanf("%ld", &q);
    while(q--){long n; scanf("%ld", &n); printf("%ld\n", v[n]);}

    return 0;
}

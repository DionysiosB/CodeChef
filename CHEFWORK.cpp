#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> c(n), w(n);
    for(long p = 0; p < n; p++){scanf("%ld", &c[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &w[p]);}

    std::vector<long> f(4, 111000);
    for(long p = 0; p < n; p++){f[w[p]] = (f[w[p]] < c[p]) ? f[w[p]] : c[p];}
    long total = f[1] + f[2];
    total = (total < f[3]) ? total : f[3];
    printf("%ld\n", total);

    return 0;
}

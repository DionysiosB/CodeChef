#include <cstdio>
#include <vector>

long labs(long x){return ((x > 0) ? x : (-x));}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> cs(n, 0);
        long d; scanf("%ld", &d); cs[0] = d;
        for(long p = 1; p < n; p++){scanf("%ld", &d); cs[p] = cs[p - 1] + d;}
        long total(0);
        for(long p = 0; p < n; p++){total += labs(cs[p]);}
        printf("%ld\n", total);
    }

    return 0;
}

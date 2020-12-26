#include <cstdio>
#include <vector>

int main(){
    
    const long POW = (1 << 16);
    int t; scanf("%d", &t);
    for(int cs = 1; cs <= t; cs++){
        printf("Case %d:\n", cs);
        long n; scanf("%ld", &n);
        std::vector<long> a(n, 0), b(n, 0);
        for(int p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            a[p] = x % POW;
            b[p] = x / POW;
        }

        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}; puts("");
        for(long p = 0; p < n; p++){printf("%ld ", b[p]);}; puts("");
    }

    return 0;
}

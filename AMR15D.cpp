#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::sort(a.begin(), a.end());
    std::vector<long> s(n + 1, 0);
    for(long p = 1; p <= n; p++){s[p] = s[p - 1] + a[p - 1];}
    long q; scanf("%ld", &q);
    while(q--){
        long k; scanf("%ld", &k);
        long u = (n / (k + 1)) + (n % (k + 1) > 0);
        printf("%ld\n", s[u]);
    }

    return 0;
}

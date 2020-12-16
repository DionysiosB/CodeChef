#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a;
    for(long p = 0; p < n; p++){
        long u; scanf("%ld", &u);
        if(u < 0){a.push_back(-u);}
    }
    long x; scanf("%ld", &x);

    sort(a.rbegin(), a.rend());
    int64_t total(0);
    for(long p = 0; p < a.size() && p < x; p++){total += a[p];}
    printf("%lld\n", total);

    return 0;
}

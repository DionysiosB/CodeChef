#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, d; scanf("%ld %ld", &n, &d);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::sort(a.begin(), a.end());
        long long total(0);
        for(long p = n - 2; p >= 0; p--){if(a[p + 1] - a[p] < d){total += a[p] + a[p + 1]; --p;}}
        printf("%lld\n", total);
    }

    return 0;
}

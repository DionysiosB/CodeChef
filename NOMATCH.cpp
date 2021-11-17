#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long long sum(0);
        for(long p = 0; 2 * p < n; p++){sum += a[n - 1 - p] - a[p];}
        printf("%lld\n", sum);
    }

    return 0;
}

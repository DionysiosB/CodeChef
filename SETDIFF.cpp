#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    const int64_t MOD = 10e9 + 7;
    int t; scanf("%d", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<int64_t> a(n);
        for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());

        std::vector<int64_t> pow(n, 1);
        for(long p = 1; p < n; p++){pow[p] = 2 * pow[p - 1]; pow[p] %= MOD;}

        int64_t total(0);
        for(long p = 0; p < n; p++){
            total += a[p] * (pow[p] - pow[n - 1 - p]);
            total %= MOD;
        }

        printf("%lld\n", total);
    }

    return 0;
}

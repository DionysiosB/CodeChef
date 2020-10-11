#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long long> a(n), b(n);
        for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        for(long p = 0; p < n; p++){scanf("%lld", &b[p]);}
        long long profit(0);
        for(long p = 0; p < n; p++){
            long long test = (k / a[p]) * b[p];
            profit = (profit > test) ? profit : test;
        }
        printf("%lld\n", profit);
    }

    return 0;
}

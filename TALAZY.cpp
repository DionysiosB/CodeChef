#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int64_t n, b, m; scanf("%lld %lld %lld", &n, &b, &m);
        std::vector<int64_t> a, d;
        long dur(1);
        while(n > 0){
            a.push_back((n + 1) / 2); 
            d.push_back(dur * m); dur *= 2;
            n = n - (n + 1) / 2;
        }

        int64_t total = b * (a.size() - 1);
        for(long p = 0; p < a.size(); p++){total += a[p] * d[p];}
        printf("%lld\n", total);
    }

    return 0;
}

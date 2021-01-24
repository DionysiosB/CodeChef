#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int64_t t; scanf("%lld", &t);
    while(t--){
        int64_t n; int64_t k; scanf("%lld %lld", &n, &k);
        std::vector<int64_t> cost(n), weight(n);
        for(int64_t p = 0; p < n; p++){scanf("%lld %lld", &cost[p], &weight[p]);}
        int64_t maxW(0);
        for(int64_t p = 1; p < (1 << n); p++){
            int64_t u = p;
            int64_t candC(0), candW(0);
            for(int64_t b = 0; b < n; b++){candC += (u % 2) * cost[b]; candW += (u % 2) * weight[b]; u /= 2;}
            if(candC <= k && candW > maxW){maxW = candW;}
        }

        printf("%lld\n", maxW);

    }

    return 0;
}

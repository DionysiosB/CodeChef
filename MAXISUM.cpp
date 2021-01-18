#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

bool pairCompare(std::pair<long, long> x, std::pair<long, long> y){return (std::abs(x.second) > std::abs(y.second));}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &(v[p].first));}
        for(long p = 0; p < n; p++){scanf("%ld", &(v[p].second));}
        std::sort(v.begin(), v.end(), pairCompare);
        if(v[0].second < 0){v[0].first -= k;}
        else{v[0].first += k;}

        long long total(0);
        for(long p = 0; p < n; p++){total += v[p].first * v[p].second;}
        printf("%lld\n", total);
    }

    return 0;
}

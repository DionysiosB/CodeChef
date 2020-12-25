#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

bool pairCompare(std::pair<long, long> a, std::pair<long, long> b){
    return (a.second < b.second) || ((a.second == b.second) && (a.first < b.first));
}

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::vector<std::pair<long, long> > > a(k + 1);
        while(n--){
            long s, f, pr; scanf("%ld %ld %ld", &s, &f, &pr);
            a[pr].push_back(std::make_pair(s, f));
        }

        long total(0);
        for(long p = 1; p <= k; p++){
            std::vector<std::pair<long, long> >  times = a[p];
            std::sort(times.begin(), times.end(), pairCompare);
            long count = (times.size() > 0);
            for(long u = 1; u < times.size(); u++){count += (times[u - 1].second <= times[u].first);}
            total += count;
        }

        printf("%ld\n", total);
    }

    return 0;
}

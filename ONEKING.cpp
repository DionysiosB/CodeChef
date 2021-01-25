#include <iostream>
#include <vector>
#include <algorithm>

bool pairCompare(std::pair<long, long> a, std::pair<long, long> b){
    return((a.second < b.second) || (a.second == b.second && a.first < b.first));
}

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::pair<long, long> > a(n);
        for(long p = 0; p < n; p++){
            long x, y; std::cin >> x >> y;
            a[p] = std::make_pair(x, y);
        }

        sort(a.begin(), a.end(), pairCompare);
        long last(-1), count(0);
        for(long p = 0; p < n; p++){
            if(last < a[p].first){last = a[p].second; ++count;}
        }

        printf("%ld\n", count);
    }

    return 0;
}

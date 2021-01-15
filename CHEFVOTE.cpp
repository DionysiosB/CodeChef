#include<iostream>
#include<vector>
#include<algorithm>

bool pairCompare(std::pair<long, long> a, std::pair<long, long> b){return (a.second > b.second);}

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::pair<long, long> > v(n);
        bool possible(true);
        long total(0), maxvotes(0);
        for(long p = 0; p < n; p++){
            long x; std::cin >> x; v[p] = std::make_pair(p, x);
            if(x >= n){possible = false;}
            total += x;
            maxvotes = (maxvotes > x) ? maxvotes : x;
        }
        if(total != n){possible = false;}
        if(!possible){std::cout << "-1" << std::endl; continue;}

        if(maxvotes == 1){for(long p = 1; p <= n; p++){std::cout << ((p % n) + 1) << " ";}; std::cout << std::endl; continue;}

        std::sort(v.begin(), v.end(), pairCompare);
        std::vector<long> who(n + 1, -1);
        who[v[0].first] = v[1].first; --v[1].second;

        long cur(1);
        for(long p = 0; p < n; p++){
            long s = v[p].first;
            long c = v[p].second;
            while(c > 0 && cur < n){who[v[cur].first] = s; --c; ++cur;}
        }

        for(long p = 0; p < n; p++){std::cout << (1 + who[p]) << " ";}
        std::cout << std::endl;
    }

    return 0;
}

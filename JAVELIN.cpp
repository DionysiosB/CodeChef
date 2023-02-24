#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, x; scanf("%ld %ld %ld", &n, &m, &x);
        std::vector<std::pair<long, long> > v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p].first); v[p].second = p + 1;}
        sort(v.rbegin(), v.rend());
        std::vector<long> ids;
        for(long p = 0; p < n; p++){if(v[p].first >= m || p < x){ids.push_back(v[p].second);}}
        sort(ids.begin(), ids.end());
        printf("%ld ", ids.size());
        for(long p = 0; p < ids.size(); p++){printf("%ld ", ids[p]);}
        puts("");
    }

}

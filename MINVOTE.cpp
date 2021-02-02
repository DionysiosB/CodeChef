#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> s(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &s[p]);}
        std::vector<long> cs(n + 1); for(long p = 1; p <= n; p++){cs[p] = cs[p - 1] + s[p];}
        cs.push_back(3 * cs.back());
        std::vector<long> df(n + 3, 0);
        for(long p = 1; p <= n; p++){
            long v = cs[p] - cs[p - 1];
            long left = (std::lower_bound(cs.begin(), cs.end(), cs[p - 1] - v) - cs.begin());
            long right = (std::upper_bound(cs.begin(), cs.end(), cs[p] + v) - cs.begin());
            ++df[left]; --df[p];
            ++df[p + 1]; --df[right + 1];
        }

        long votes(df[0]);
        for(long p = 1; p <= n; p++){votes += df[p]; printf("%ld ", votes);}
        puts("");

    }

    return 0;
}

#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, w; scanf("%ld %ld", &n, &w);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.rbegin(), a.rend());
        long s(0), idx(0);
        for(idx = 0; s < w && idx < n; idx++){s += a[idx];}
        printf("%ld\n", n - idx);

    }

}

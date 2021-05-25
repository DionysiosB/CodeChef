#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(2 * n); for(long p = 0; p < 2 * n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        std::vector<long> b;
        for(long p = 0; p < n; p++){b.push_back(a[p]); b.push_back(a[n + p]);}
        printf("%ld\n", a[n + n/2]);
        for(long p = 0; p < 2 * n; p++){printf("%ld ", b[p]);}
        puts("");
    }

    return 0;
}

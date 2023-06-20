#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long res(0);
        for(long p = 0; p < k; p++){
            std::map<long, long> m;
            long cnt(0);
            for(long q = p; q < n; q += k){
                ++m[a[q]];
                cnt = (cnt > m[a[q]]) ? cnt : m[a[q]];
            }

            res += cnt;
        }

        printf("%ld\n", n - res);
    }

}

#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(2 * n); for(long p = 0; p < 2 * n; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end());
        long ans(v.back() - v[0]);
        for(long p = n - 1; p < 2 * n; p++){
            long cur = v[p] - v[p - (n - 1)];
            ans = (ans < cur) ? ans : cur;
        }

        printf("%ld\n", ans);
    }

}

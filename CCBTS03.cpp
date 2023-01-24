#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end());
        long mn(1e9 + 7);
        for(long p = 0; p + k <= n; p++){
            long diff = v[p + k - 1] - v[p];
            mn = (mn < diff) ? mn : diff;
        }

        printf("%ld\n", mn);
    }

}

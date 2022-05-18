#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    const long MOD = 1000000007;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.rbegin(), v.rend());
        ll res(0);
        for(long p = 0; p < n; p++){
            if(v[p] <= p){break;}
            res += (v[p] - p); res %= MOD;
        }

        printf("%lld\n", res);
    }

}

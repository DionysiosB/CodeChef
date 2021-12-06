#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        if((n % 2) && k >= n){a[n / 2] = 0;}
        k %= (3 * n);
        for(ll p = 0; p < k; p++){
            ll to = (p % n); ll from = n - 1 - to;
            a[to] = a[to] ^ a[from];
        }

        for(ll p = 0; p < n; p++){printf("%lld ", a[p]);}
        puts("");
    }

    return 0;
}

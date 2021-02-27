#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        ll sum(0);
        std::vector<ll> a(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); sum += a[p];}
        ll cnt(0);
        for(ll p = 0; p < n; p++){cnt += (a[p] + k > sum - a[p]);}
        printf("%lld\n", cnt);
    }

    return 0;
}

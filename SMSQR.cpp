#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;
    ll t; scanf("%lld", &t);
    while(t--){
        ll x, y; scanf("%lld %lld", &x, &y);
        ll n = y - x;
        ll ans = (n - 1) * n * (n + 1) / 3 + (y - x) * (y + x) * (y + x);
        ans %= MOD;
        printf("%lld\n", ans);
    }

    return 0;
}

#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;
    ll n; scanf("%lld", &n);
    ll s(0); for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); s += x; s = (s + MOD) % MOD;}
    ll q; scanf("%lld", &q);
    ll mult(1);
    for(ll p = 0; p < q; p++){mult *= 2; mult %= MOD; printf("%lld\n", (s * mult) % MOD);}

}

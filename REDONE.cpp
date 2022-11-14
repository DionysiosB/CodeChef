#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 1000000007;
    const ll N = 1000007;
    ll f[N] = {0}; f[1] = 1;
    for(ll p = 2; p < N; p++){f[p] = ((f[p - 1] + 1) * (p + 1) - 1) % MOD;}

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%lld\n", f[n]);
    }

}

#include <cstdio>
typedef long long ll;
const long long MOD = 1e9 + 7;

ll modExp(ll b, ll x, ll M){

    if(x <= 0){return 1;}
    ll tmp = modExp(b, x / 2, M);
    ll ans = (tmp * tmp) % M;
    ans = (ans * ((x & 1) ? b : 1)) % M;
    return ans % M;
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, w; scanf("%lld %lld", &n, &w);
        if(w < -9 || w > 8){puts("0"); continue;}
        ll mult = (w < 0) ? (w + 10) : (9 - w);
        ll ans = mult * modExp(10, n - 2, MOD); 
        ans %= MOD;
        printf("%lld\n", ans);
    }

    return 0;
}

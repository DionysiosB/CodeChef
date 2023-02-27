#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 998244353;
    const ll INV = 748683265; // INVERSE OF 4 MOD 998244353
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll res = (((n + 1) % MOD) * ((n + 1) % MOD) % MOD) * (n % MOD) % MOD;
        if(res % 4){res *= INV; res %= MOD;}
        else{res /= 4;}
        printf("%lld\n", res % MOD);
    }

}

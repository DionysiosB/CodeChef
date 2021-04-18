#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 1000000007;
    ll n, k; scanf("%lld %lld", &n, &k);
    ll f; std::vector<ll> s(n + 1, 0);
    for(ll p = 1; p <= n; p++){
        if(p <= k){f = 1;}
        else{f = s[p - 1] - ((p - k - 1 >= 0) ? s[p - k - 1] : 0);}
        s[p] = s[p - 1] + f; 
        f %= MOD; s[p] %= MOD;
    }

    printf("%lld\n", f);

    return 0;
}

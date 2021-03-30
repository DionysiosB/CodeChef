#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k, e, m; scanf("%lld %lld %lld %lld", &n, &k, &e, &m);
        std::vector<ll> a(n - 1, 0);
        for(ll p = 0; p < n - 1; p++){
            for(ll u = 0; u < e; u++){ll x; scanf("%lld", &x); a[p] += x;}
        }
        sort(a.rbegin(), a.rend());
        ll target = a[k - 1] + 1;
        ll cur(0);
        for(ll p = 0; p < e - 1; p++){ll x; scanf("%lld", &x); cur += x;}
        if(cur > target){puts("0");}
        else if(cur + m < target){puts("Impossible");}
        else{printf("%lld\n", target - cur);}
    }

    return 0;
}

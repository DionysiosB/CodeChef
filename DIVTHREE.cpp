#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k, d; scanf("%lld %lld %lld", &n, &k, &d);
        ll s(0);
        for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); s += x;}
        ll res = s / k;
        res = (res < d) ? res : d;
        printf("%lld\n", res);
    }

}

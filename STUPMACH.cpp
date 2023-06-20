#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll mn(1e9), ans(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            mn = (mn < x) ? mn : x;
            ans += mn;
        }

        printf("%lld\n", ans);
    }

}

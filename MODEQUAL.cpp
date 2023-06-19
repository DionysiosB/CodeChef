#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll mn(1e15),smn(1e16), cnt(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(x < mn){smn = mn; mn = x;cnt = 1;}
            else if(x == mn){++cnt;}
            else if(x < smn){smn = x;}
        }

        ll res = n - cnt * (smn > 2 * mn);
        printf("%lld\n", res);
    }

}

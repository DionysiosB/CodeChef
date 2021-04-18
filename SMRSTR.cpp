#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, q; scanf("%lld %lld", &n, &q);
        ll d(1);
        for(ll p = 0; p < n; p++){
            ll u; scanf("%lld", &u); d *= u;
            if(d < 0 || d > 1e9){break;}
        }

        while(q--){ll x; scanf("%lld", &x); x /= d; printf("%lld ", x);}
        puts("");
    }

    return 0;
}

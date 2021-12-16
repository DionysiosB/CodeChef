#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll mx(0);
        for(ll p = 0; p < n; p++){
            ll s, r, v; scanf("%lld %lld %lld", &s, &r, &v);
            ++s;
            ll tmp = (r / s) * v;
            mx = (mx > tmp) ? mx : tmp;
        }

        printf("%lld\n", mx);
    }

    return 0;
}

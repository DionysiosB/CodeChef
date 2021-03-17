#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        std::vector<ll> v;
        while(a > 0 || b > 0){
            ll x = (a % 10) + (b % 10); x %= 10; v.push_back(x);
            a /= 10; b /= 10;
        }


        ll res(0);
        for(ll p = v.size() - 1; p >= 0; p--){res = 10 * res + v[p];}
        printf("%lld\n", res);
    }

    return 0;
}

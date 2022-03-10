#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::map<ll, ll> z;
        ll res(0);
        for(ll p = 0; p < n; p++){
            std::map<ll, ll> t;
            ll neg(0), pos(0);
            ll m; scanf("%lld", &m);
            ll line(0);
            for(ll u = 0; u < m; u++){
                ll x; scanf("%lld", &x);
                neg += (x < 0); pos += (x > 0);
                x = (x > 0) ? x : (-x);
                if(t.count(x)){--line;}
                else{t[x] = 1; ++z[x];}
            }

            line += pos * neg;
            res += line;
        }

        for(std::map<ll, ll>::iterator it = z.begin(); it != z.end(); it++){
            ll cur = it->second;
            res += (cur > 1);
        }

        printf("%lld\n", res);
    }

}

#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll m = (1 << n);
        std::multiset<ll> s; for(ll p = 0; p < m; p++){ll x; scanf("%lld", &x); s.insert(x);}
        s.erase(s.find(0));
        std::vector<ll> v(n);
        for(long p = 0; p < n; p++){
            v[p] = *s.begin();
            s.erase(s.begin());
            for(long q = 0; q < p; q++){s.erase(s.find(v[q] + v[p]));}
        }

        for(long p = 0; p < n; p++){printf("%lld ", v[p]);}
        puts("");
    }

    return 0;
}

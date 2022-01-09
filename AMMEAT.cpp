#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.rbegin(), a.rend());
        ll s(0), res(0);
        for(ll p = 0; p < n; p++){s += a[p]; if(s >= m){res = p + 1; break;}}
        printf("%lld\n", (s >= m) ? res : -1);
    }

    return 0;
}

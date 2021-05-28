#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<std::pair<ll, ll> > a(n);
    for(ll p = 0; p < n; p++){
        ll x, y, z; scanf("%lld %lld %lld", &x, &y, &z);
        a[p].first = y + z;
        a[p].second = x;
    }

    sort(a.rbegin(), a.rend());
    ll fin(0), start(0);
    for(long p = 0; p < n; p++){
        ll cur = start + a[p].first + a[p].second;
        fin = (fin > cur) ? fin : cur;
        start += a[p].second;
    }

    printf("%lld\n", fin);

    return 0;
}

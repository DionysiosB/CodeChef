#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, x, y; scanf("%lld %lld %lld\n", &n, &x, &y);
    std::vector<ll> a(n), b(n);
    std::vector<std::pair<ll, ll> > d(n);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}
    for(ll p = 0; p < n; p++){d[p].first = a[p] - b[p]; d[p].second = p;}
    sort(d.rbegin(), d.rend());
    ll total(0);
    for(ll p = 0; p < n; p++){
        ll diff = d[p].first; ll idx = d[p].second;
        total += ((p < n - y) || (diff > 0 && p < x)) ? a[idx] : b[idx];
    }

    printf("%lld\n", total);

    return 0;
}

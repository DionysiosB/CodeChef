#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    ll total(0);
    for(ll p = 1; p < n; p++){total += a[p - 1] * a[p];}
    printf("%lld\n", total);

    return 0;
}

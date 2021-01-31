#include <cstdio>
#include <vector>
typedef long long ll;
const int B = 31;

int main(){

    ll n, q; scanf("%lld %lld", &n, &q);
    std::vector<ll> a(n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}
    std::vector<std::vector<ll> > m(B, std::vector<ll>(n + 1, 0));

    ll w(1);
    for(int b = 0; b < B; b++){
        for(ll p = 1; p <= n; p++){m[b][p] = m[b][p - 1] + ((a[p] & w) > 0);}
        w *= 2;
    }

    while(q--){
        ll left, right; scanf("%lld %lld", &left, &right);
        ll x(0), w(1);
        for(long b = 0; b < B; b++){
            ll ones = m[b][right] - m[b][left - 1];
            ll zeros = (right - left + 1) - ones;
            x += (zeros > ones) ? w : 0;
            w *= 2;
        }

        printf("%lld\n", x);
    }

    return 0;
}

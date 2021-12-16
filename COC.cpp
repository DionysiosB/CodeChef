#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}
    ll diff(0), cnt(0);
    for(ll p = n - 1; p >= 0; p--){
        a[p] += diff;
        if(a[p] % b[p] == 0){continue;}
        ll tmp = b[p] * (1 + a[p] / b[p]) - a[p];
        diff += tmp;
        cnt += (p + 1) * tmp;
    }

    printf("%lld\n", cnt);

    return 0;
}

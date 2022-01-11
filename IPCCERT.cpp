#include <cstdio>
typedef long long ll;

int main(){

    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    ll cnt(0);
    for(ll p = 0; p < n; p++){
        ll s(0);
        for(ll q = 0; q < k; q++){ll t; scanf("%lld", &t); s += t;}
        ll u; scanf("%lld", &u);
        cnt += (s >= m) && (u <= 10);
    }

    printf("%lld\n", cnt);

}

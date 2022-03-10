#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> a(n), b(m); ll sa(0), sb(0);
        for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); sa += a[p];}
        for(ll p = 0; p < m; p++){scanf("%lld", &b[p]); sb += b[p];}
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        ll cnt(0);
        for(ll p = 0; p < m && p < n && sa <= sb; p++){
            ll diff = b[p] - a[p];
            if(diff <= 0){break;}
            sa += diff; sb -= diff; ++cnt;
        }

        printf("%lld\n", sa > sb ? cnt : -1);
    }

}

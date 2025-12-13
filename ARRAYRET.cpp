#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> b(n); ll total(0);
        for(ll p = 0; p < n; p++){scanf("%lld", &b[p]); total += b[p];}
        total /= (n + 1);
        for(long p = 0; p < n; p++){printf("%lld ", b[p] - total);}
        puts("");
    }

}

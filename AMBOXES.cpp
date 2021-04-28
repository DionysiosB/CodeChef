#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%lld", &a[p]);}
    while(m--){
        ll total(0), cur(0); scanf("%lld", &cur);
        for(long p = 1; p <= n; p++){
            cur = (cur + a[p] - 1) / a[p];
            if(cur > 1){total += cur;}
            else{total += (n - p + 1); break;}
        }

        printf("%lld\n", total);
    }

    return 0;
}

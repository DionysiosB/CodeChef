#include <cstdio>
#include <map>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::map<ll, ll> cnt;
        for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); ++cnt[x];}
        ll res(0);
        for(std::map<ll, ll>::iterator it = cnt.begin(); it != cnt.end(); it++){
            long cur = it->second;
            res += cur * (n - cur);
        }

        printf("%lld\n", res);
    }

}

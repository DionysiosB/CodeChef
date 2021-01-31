#include <cstdio>
#include <vector>
typedef long long ll;

bool check(const std::vector<ll> &a, ll k, ll h){

    ll time(0);
    for(ll p = 0; p < a.size(); p++){
        time += (a[p] + k - 1) / k;
        if(time > h){return false;}
    }

    return true;
}


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, h; scanf("%lld %lld", &n, &h);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        ll left(1), right(1e18), ans(1);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(check(a, mid, h)){ans = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        printf("%lld\n", ans);
    }

    return 0;
}

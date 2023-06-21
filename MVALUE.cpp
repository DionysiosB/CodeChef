#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
        sort(a.begin(), a.end());
        ll candA = a[0] * a[1] + a[1] - a[0];
        ll candB = a[n - 1] * a[n - 2] + a[n - 1] - a[n - 2];
        ll res = (candA > candB) ? candA : candB;
        printf("%lld\n", res);
    }

}

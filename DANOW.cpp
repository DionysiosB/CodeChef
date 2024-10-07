#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<ll> v(n);
    for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); v[p] *= x;}
    for(ll p = 1; p < n; p++){v[p] += v[p - 1];}
    for(ll p = 0; p < q; p++){
        long left, right; scanf("%ld %ld", &left, &right);
        --left; --right;
        printf("%lld\n", v[right] - (left > 0 ? v[left - 1] : 0));
    }

}

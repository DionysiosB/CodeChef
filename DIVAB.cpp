#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b, n; scanf("%lld %lld %lld", &a, &b, &n);
        if(a % b == 0){puts("-1"); continue;}
        ll div = (n + a - 1) / a;
        ll res(0);
        for(ll p = div * a; !res && p < 2e18; p += a){if(p % b != 0){res = p;}}
        printf("%lld\n", res);
    }

}

#include <cstdio>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    while(m--){
        ll q; scanf("%lld", &q);
        if(q <= n + 1 || q > 3 * n){puts("0");}
        else if(q <= 2 * n + 1){printf("%lld\n", q - n - 1);}
        else if(q <= 3 * n){printf("%lld\n", 3 * n + 1 - q);}
    }

    return 0;
}

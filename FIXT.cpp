#include <cstdio>
typedef long long ll;

int main(){

    ll k; scanf("%lld", &k);
    ll res = k * (2 * k - 1);
    printf("%lld\n", res);

    return 0;
}

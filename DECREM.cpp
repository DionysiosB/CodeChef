#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll l, r; scanf("%lld %lld", &l, &r);
        printf("%lld\n", (r < 2 * l) ? r : -1);
    }
}

#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll l, r; scanf("%lld %lld", &l, &r);
        printf("%lld\n", (r / 3) - ((l - 1) / 3));
    }

}

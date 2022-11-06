#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a,b ; scanf("%lld %lld", &a, &b);
        printf("%lld\n", 2 * (b - a) + 1);
    }

}

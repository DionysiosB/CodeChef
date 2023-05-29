#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        printf("%lld\n", n * n - 3 * n + 3);
    }

}

#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b, n; scanf("%lld %lld %lld", &a, &b, &n);
        if(n & 1){a *= 2;}
        ll mx = (a > b) ? a : b;
        ll mn = (a < b) ? a : b;
        printf("%lld\n", mx / mn);
    }

    return 0;
}

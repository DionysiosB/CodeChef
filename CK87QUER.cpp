#include <cstdio>
#include <cmath>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll y; scanf("%lld", &y);
        ll cnt(0); for(ll b = 1; b <= 700 && b < y; b++){cnt += sqrt(y - b);}
        printf("%lld\n", cnt);
    }

    return 0;
}

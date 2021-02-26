#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll x; scanf("%lld", &x);
        ll mn(1e17);
        for(ll p = 1; p < 1e5; p++){
            ll subway = p; 
            ll walk = p * (p + 1) / 2 - x; if(walk < 0){walk = -walk;}
            ll total = subway + walk;
            mn = (mn < total) ? mn : total;
        }

        printf("%lld\n", mn);
    }

    return 0;
}

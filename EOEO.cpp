#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll x; scanf("%lld", &x);
        while(x % 2 == 0){x /= 2;}
        printf("%lld\n", x / 2);
    }

}

#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        a -= (a % 2); b += (b % 2);
        ll diff = (b - a) / 2;
        puts(diff % 2 ? "Odd" : "Even");
    }

}

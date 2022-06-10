#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        puts((n / k) % k ? "YES" : "NO");
    }

}

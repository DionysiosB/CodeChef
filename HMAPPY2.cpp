#include <cstdio>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, a, b, k; scanf("%lld %lld %lld %lld", &n, &a, &b, &k);
        ll res = (n / a) + (n / b) - 2 * (n / (a * b / gcd(a, b)));
        puts(res >= k ? "Win" : "Lose");
    }

}

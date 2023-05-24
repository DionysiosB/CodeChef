#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        puts(!(b&(b-1)) ? "Yes" : "No");
    }

}

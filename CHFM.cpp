#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll sum(0);
        std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); sum += a[p];}
        if(sum % n){puts("Impossible"); continue;}

        ll mean = sum / n; 
        ll idx(-1);
        for(ll p = 0; p < n; p++){if(a[p] == mean){idx = p + 1; break;}}
        if(idx < 0){puts("Impossible");}
        else{printf("%lld\n", idx);}
    }

}

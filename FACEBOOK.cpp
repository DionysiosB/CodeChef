#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        std::vector<ll> b(n); for(long p = 0; p < n; p++){scanf("%lld", &b[p]);}
        long res(0), mx(0);
        for(long p = 0; p < n; p++){
            ll score = 1e6 * a[p] + b[p];
            if(score > mx){res = p; mx = score;}
        }

        printf("%ld\n", res + 1);
    }

}

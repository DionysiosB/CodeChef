#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n, 0); ll cnt(0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); cnt += (a[p] % 2);}

        ll odd(0), res(0);
        for(long p = 0; p < n; p++){
            if(a[p] % 2){++odd;}
            else{res += (cnt - odd);}
        }

        printf("%lld\n", res);
    }

}

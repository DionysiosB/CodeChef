#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        ll pos(0), neg(0), res(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > 0){res += pos; ++pos;}
            else if(x < 0){res += neg; ++neg;}
        }

        printf("%lld\n", res);
    }

}

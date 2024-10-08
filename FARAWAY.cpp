#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        ll res(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            res += ((x - 1) > (m - x) ? (x - 1) : (m - x));
        }

        printf("%lld\n", res);

    }

}

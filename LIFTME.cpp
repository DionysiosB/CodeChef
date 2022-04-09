#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, q; scanf("%ld %ld", &n, &q);
        long long res(0), pos(0);
        for(long p = 0; p < q; p++){
            long from, to; scanf("%ld %ld", &from, &to);
            long diff = pos - from; diff = (diff > 0) ? diff : -diff;
            res += diff;
            diff = to - from; diff = (diff > 0) ? diff : -diff;
            res += diff;
            pos = to;
        }

        printf("%lld\n", res);
    }

}

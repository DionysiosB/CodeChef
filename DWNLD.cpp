#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long N, K; scanf("%ld %ld", &N, &K);
        long time(0);
        long long cost(0);
        while(N--){
            long T, D; scanf("%ld %ld", &T, &D);
            if(time + T > K){cost += (T - (time < K) * (K - time)) * D;}
            time += T;
        }

        printf("%lld\n", cost);
    }

    return 0;
}

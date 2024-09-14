#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long long cost(0);
        std::vector<long> a(n, 0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            cost += (a[p] >= x) * b;
        }

        printf("%lld\n", cost);
    }

}

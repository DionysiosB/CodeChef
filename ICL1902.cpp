#include <cstdio>
#include <cmath>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        while(n){
            long sqr = std::sqrt(n);
            n -= sqr * sqr;
            ++cnt;
        }

        printf("%ld\n", cnt);
    }

}

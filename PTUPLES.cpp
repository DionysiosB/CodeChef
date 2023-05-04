#include <cstdio>
#include <vector>

int main(){

    const long N = 1e6 + 7;
    std::vector<bool> a(N, 1);
    a[0] = a[1] = 0;
    for(long p = 2; p * p < N; p++){
        if(!a[p]){continue;}
        for(long q = 2; q * p < N; q++){a[q * p] = 0;}
    }

    std::vector<long> f(N, 0);
    for(long p = 5; p < N; p++){f[p] = f[p - 1] + (a[p] && a[p - 2]);}

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", f[n]);
    }

}

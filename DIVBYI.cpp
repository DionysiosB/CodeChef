#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f(n + 1, 0);
        long cur(n);
        for(long p = n; p >= 1; p -= 2){f[p] = cur--;}
        for(long p = 1; p <= n; p++){if(!f[p]){f[p] = cur--;}}
        for(long p = 1; p <= n; p++){printf("%ld ", f[p]);}
        puts("");
    }

}

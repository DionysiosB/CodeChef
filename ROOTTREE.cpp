#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<bool> dest(n + 1, 0);
        for(long p = 1; p < n; p++){
            long u, v; scanf("%ld %ld", &u, &v);
            dest[v] = 1;
        }
        
        long cnt(0);
        for(long p = 1; p <= n; p++){cnt += (!dest[p]);}
        printf("%ld\n", cnt - 1);
    }
}

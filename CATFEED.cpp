#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> f(n + 1, 0);
        bool ans(true);
        for(long p = 0; p < m; p++){
            long x; scanf("%ld", &x);
            if(f[x] > (p / n)){ans = false;}
            ++f[x];
        }

        puts(ans ? "YES" : "NO");
    }

}

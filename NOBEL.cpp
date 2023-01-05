#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<bool> f(m + 1, 1);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); f[x] = 0;}
        bool res(false);
        for(long p = 1; p <= m; p++){if(f[p]){res = true; break;}}
        puts(res ? "Yes" : "No");
    }

}

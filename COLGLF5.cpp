#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n,m; scanf("%ld %ld", &n, &m);
        std::vector<long> f(n); for(long p = 0; p < n; p++){scanf("%ld", &f[p]);}
        std::vector<long> g(m); for(long p = 0; p < m; p++){scanf("%ld", &g[p]);}
        f.push_back(1e9 + 7); g.push_back(1e9 + 7);

        long cnt(0), a(0), b(0), w(0);
        for(long p = 0; p < m + n; p++){
            if(f[a] == g[b]){break;}
            if(b >= m || f[a] <= g[b]){++a; if(w){++cnt;}; w = 0;}
            else if(a >= n || g[b] <= f[a]){++b; if(!w){++cnt;}; w = 1;}
        }

        printf("%ld\n", cnt);
    }

}

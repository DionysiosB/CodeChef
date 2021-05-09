#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        std::vector<std::vector<long> > g(n + 1);
        for(long p = 0; p < m; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            g[x].push_back(y); g[y].push_back(x);
        }

        bool done(false);

        for(long p = 1; p <= n; p++){
            if(g[p].size() > k){continue;}
            printf("CUT\n1 %ld\n", p);
            done = true; break;
        }
        if(done){continue;}

        for(long p = 1; p <= n; p++){
            bool cycle(false);
            std::vector<bool> visited(n + 1);
            dfs(node, g, visited

        }




    }

    return 0;
}

#include <cstdio>
#include <vector>

void dfs(int node, const std::vector<std::vector<long> > &g, std::vector<bool> &been, long long &cnt){

    if(been[node]){return;}
    been[node] = 1; ++cnt;
    for(long p = 0; p < g[node].size(); p++){
        long nn = g[node][p];
        if(been[nn]){continue;}
        dfs(nn, g, been, cnt);
    }

    return;
}


int main(){

    const long long MOD = 1e9 + 7;
    int t; scanf("%d", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > g(n + 1);
        for(long p = 0; p < m; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            g[x].push_back(y); g[y].push_back(x);
        }

        std::vector<bool> visited(n + 1, 0);
        std::vector<long long> segments;
        for(long p = 1; p <= n; p++){
            if(visited[p]){continue;}
            long long count(0);
            dfs(p, g, visited, count);
            segments.push_back(count);
        }

        long long prod(1);
        for(long p = 0; p < segments.size(); p++){prod *= segments[p]; prod %= MOD;}
        printf("%ld %lld\n", segments.size(), prod);
    }

    return 0;
}

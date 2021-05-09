#include <cstdio>
#include <vector>

struct triple{long a, b, c, d;};

void dfs(long node, long from, const std::vector<std::vector<long> > &g, std::vector<triple> &tv, bool &possible){

    if(!possible){return;}
    if((from != 0) && g[node].size() <= 1){return;}
    if((from != 0) && (g[node].size() % 3 != 1)){possible = false; return;}
    std::vector<long> dv;
    for(long p = 0; p < g[node].size(); p++){
        if(g[node][p] == from){continue;}
        dv.push_back(g[node][p]);
    }

    if(dv.size() % 3 != 0){possible = false; return;}
    for(long p = 0; p < dv.size(); p += 3){
        triple cur; cur.a = node; cur.b = dv[p]; cur.c = dv[p + 1]; cur.d = dv[p + 2];
        tv.push_back(cur);
    }

    for(long p = 0; p < dv.size(); p++){dfs(dv[p], node, g, tv, possible);}

    return;
}


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<long> > g(n + 1);
        for(long p = 1; p < n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            g[x].push_back(y); g[y].push_back(x);
        }

        if(n % 3 != 1){puts("NO"); continue;}
        long start(1); for(long p = 1; p <= n; p++){if(g[p].size() % 3 == 0){start = p; break;}}

        bool possible(true);
        std::vector<triple> tv;
        dfs(start, 0, g, tv, possible);
        if(!possible){puts("NO");}
        else{
            puts("YES");
            for(long p = 0; p < tv.size(); p++){printf("%ld %ld %ld %ld\n", tv[p].a, tv[p].b, tv[p].c, tv[p].d);}
        }
    }

    return 0;
}

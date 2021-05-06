#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

struct pos{long x, y;};

int main(){

    long n; scanf("%ld", &n);
    long ax, ay; scanf("%ld %ld", &ax, &ay);
    long bx, by; scanf("%ld %ld", &bx, &by);

    std::vector<pos> > t(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld %ld", &t[p].x, &t[p].y);}

    std::vector<std::vector<long> > f(n + 1, std::vector<long>(2, 0));
    std::vector<std::vector<pos> > a(n + 1, std::vector<pos>(2));
    std::vector<std::vector<pos> > b(n + 1, std::vector<pos>(2));

    g[0][0] = std::make_pair(ax, ay);
    g[0][1] = std::make_pair(bx, by);


    for(long p = 1; p <= n; p++){
        long cost00 = std::abs(g[p - 1][0].first - t[p].first) + std::abs(g[p - 1][0].second - t[p].second);
        long cost10 = std::abs(g[p - 1][1].first - t[p].first) + std::abs(g[p - 1][1].second - t[p].second);
        long cand00 = f[p - 1][0] + cost00;
        long cand10 = f[p - 1][1] + cost10;

        if(cand00 < cand10){g[p][0] = t[p]; f[p][0] = cand00;}
        else{g[p][0] = g[p - 1][0]; f[p][0] = cand10;}
    

    }





    return 0;
}

#include <cstdio>
#include <vector>

long find(long x, std::vector<long> &v){return (v[x] == x) ? x : (v[x] = find(v[x], v));}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> f(n + 1, 0); for(long p = 1; p <= n; p++){f[p] = p;}
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y); 
        long rx = find(x, f);
        long ry = find(y, f);
        f[ry] = rx;
    }

    long q; scanf("%ld", &q);
    while(q--){
        long x, y; scanf("%ld %ld", &x, &y);
        long rx = find(x, f);
        long ry = find(y, f);
        puts(rx == ry ? "YES" : "NO");
    }

    return 0;
}

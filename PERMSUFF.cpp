#include <cstdio>
#include <vector>

long find(std::vector<long> &a, long x){return (a[x] == x) ? x : (a[x] = find(a, a[a[x]]));}
bool check(std::vector<long> &a, long x, long y){return find(a, x) == find(a, y);}
void join(std::vector<long> &a, long x, long y){long rx = find(a, x); long ry = find(a, y); a[rx] = ry;}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> perm(n + 1, 0);
        for(long p = 1; p <= n; p++){scanf("%ld", &perm[p]);}

        std::vector<long> a(n + 1, 0);
        for(long p = 1; p <= n; p++){a[p] = p;}
        while(m--){
            long s, t; scanf("%ld %ld", &s, &t);
            join(a, s, t);
        }

        bool possible(true);
        for(long p = 1; p <= n; p++){if(find(a, perm[p]) != find(a, p)){possible = false; break;}}
        puts(possible ? "Possible" : "Impossible");
    }

    return 0;
}

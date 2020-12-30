#include <cstdio>
#include <set>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long total(0);
        std::set<long> a; while(n--){long x; scanf("%ld", &x); a.insert(x);}
        std::set<long> b; while(m--){long x; scanf("%ld", &x); if(a.count(x) > 0){++total;}}
        printf("%ld\n", total);
    }

    return 0;
}

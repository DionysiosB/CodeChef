#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        std::vector<long> a(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
        std::vector<long> sums(n + 1, 0);
        std::vector<long> prds(n + 1, 1);
        for(long p = 1; p <= n; p++){sums[p] = sums[p - 1] + a[p]; prds[p] = prds[p - 1] * a[p];}
        long count(0);
        for(long a = 0; a <= n; a++){for(long b = a + 1; b <= n; b++){if(sums[b] - sums[a] == prds[b] / prds[a]){++count;}}}
        printf("%ld\n", count);
    }

    return 0;
}

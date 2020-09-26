#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> parent(n + 1, 0);
    std::vector<bool> isLeaf(n + 1, 1);

    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); isLeaf[x] = 0;}
    for(long p = 1; p <= n; p++){if(isLeaf[p]){printf("%ld ", p);}}
    puts("");

    return 0;
}

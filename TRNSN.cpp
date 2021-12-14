#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long cnt(0);
    for(long p = 1; p < n; p++){cnt += (a[p] != a[p - 1]);}
    printf("%ld\n", cnt);

    return 0;
}

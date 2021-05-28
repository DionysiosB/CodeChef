#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.rbegin(), a.rend());
    long mx(0);
    for(long p = 0; p < n; p++){
        long pnl = (p + 1) * a[p];
        mx = (mx > pnl) ? mx : pnl;
    }

    printf("%ld\n", mx);

    return 0;
}

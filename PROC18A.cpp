#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n + 1, 0);
        for(long p = 1; p <= n; p++){scanf("%ld", &a[p]); a[p] += a[p - 1];}
        long mx(0);
        for(long p = k; p <= n; p++){mx = mx > (a[p] - a[p - k]) ? mx : (a[p] - a[p - k]);}
        printf("%ld\n", mx);
    }

    return 0;
}

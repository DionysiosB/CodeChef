#include<cstdio>
#include<vector>
#include<algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.rbegin(), a.rend());
        long x(0), y(a[2 * k]);
        for(long p = 0; p < 2 * k; p++){(p % 2) ? (y += a[p]) : (x += a[p]);}
        printf("%ld\n", (x > y) ? x : y);
    }
}

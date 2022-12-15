#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        long mx(0); for(long p = 0; p < n; p++){long cur = a[p] + b[p]; mx = (mx > cur) ? mx : cur;}
        printf("%ld\n", mx);
    }

}

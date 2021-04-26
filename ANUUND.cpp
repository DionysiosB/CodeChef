#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        std::vector<long> b(n);
        long ind(0);
        for(long p = 0; p < n; p += 2){b[p] = a[ind++];}
        for(long p = 1; p < n; p += 2){b[p] = a[ind++];}
        for(long p = 0; p < n; p ++){printf("%ld ", b[p]);}
        puts("");
    }

    return 0;
}

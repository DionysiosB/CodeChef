#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long s(0);
        for(long p = 0; p < n; p++){s += (a[p] < b[p]) ? a[p] : b[p];}
        printf("%ld\n", s);
    }

    return 0;
}

#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long cnt(0);
        for(long p = 0; p < n; p++){cnt += ( (b[p] <= 2 * a[p]) && (a[p] <= 2 * b[p]));}
        printf("%ld\n", cnt);
    }

}

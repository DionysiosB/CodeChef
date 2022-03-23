#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n, 0);
        for(long p = n - 2; p >= 0; p--){b[p] = a[p] == a[p + 1] ? b[p + 1] : (n - 1 - p);}
        for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
        puts("");
    }

}

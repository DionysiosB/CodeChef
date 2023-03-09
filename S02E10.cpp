#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, k; scanf("%ld %ld %ld", &n, &x, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

        long cnt(0);
        for(long p = 0; p < n; p++){
            long diff = a[p] - b[p]; diff = (diff < 0) ? (-diff) : diff;
            cnt += (diff <= k);
        }

        puts(cnt >= x ? "YES" : "NO");
    }

}

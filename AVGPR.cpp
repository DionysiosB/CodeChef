#include <cstdio>
#include <vector>

int main(){

    const long M = 1e3;
    long t; scanf("%ld", &t);
    while(t--){
        std::vector<long> a(2 * M + 1, 0);
        long n; scanf("%ld", &n);
        while(n--){long x; scanf("%ld", &x); ++a[M + x];}
        long cnt(0);
        for(long p = 0; p  < a.size(); p++){
            if(a[p] <= 0){continue;}
            cnt += a[p] * (a[p] - 1);
            for(long q = p + 2; q < a.size(); q += 2){
                if(a[q] <= 0){continue;}
                long r = (p + q) / 2;
                if(a[r] <= 0){continue;}
                cnt += 2 * a[p] * a[q];
            }
        }

        cnt /= 2;
        printf("%ld\n", cnt);
    }

    return 0;
}

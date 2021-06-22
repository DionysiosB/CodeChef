#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long mn(2e9), cnt(0);
        for(long p = 0; p < n; p++){
            for(long q = p + 1; q < n; q++){
                long diff = a[p] + a[q] - k;
                if(diff < 0){diff = -diff;}
                if(diff < mn){mn = diff; cnt = 1;}
                else if(diff == mn){++cnt;}
            }
        }

        printf("%ld %ld\n", mn, cnt);
    }

    return 0;
}

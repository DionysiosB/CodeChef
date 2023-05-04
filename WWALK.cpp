#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long long res(0), sa(0), sb(0);
        for(long p = 0; p < n; p++){
            if(a[p] == b[p] && sa == sb){res += a[p];}
            sa += a[p]; sb += b[p];
        }

        printf("%lld\n", res);
    }

}

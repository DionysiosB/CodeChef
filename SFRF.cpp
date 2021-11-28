#include <cstdio>
#include <vector>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        long long mx(0);
        for(long d = 1; d <= 2; d++){
            long long tst(d > 1 ? a[0] : 0);
            long idx(0);
            for(idx = d; idx < n; idx += 2){
                long x = a[idx];
                long y = a[idx - 1];
                tst += idx * (x + y) + (x > y ? x : y);
            }
            
            if(idx <= n){tst += n * a[n - 1];}
            mx = (mx > tst) ? mx : tst;
        }
        
        printf("%lld\n", mx);
    }
    
    return 0;
}

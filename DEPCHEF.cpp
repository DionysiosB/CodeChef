#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> d(n); for(long p = 0; p < n; p++){scanf("%ld", &d[p]);}

        long ans(-1);
        for(long p = 0; p < n; p++){
            if(d[p] <= a[(n + p - 1) % n] + a[(p + 1) % n]){continue;}
            ans = (ans > d[p]) ?  ans : d[p];
        }

        printf("%ld\n", ans);
    }

}

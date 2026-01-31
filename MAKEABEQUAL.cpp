#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n); long long sa(0), sb(0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); sa += a[p];}
        for(long p = 0; p < n; p++){scanf("%ld", &b[p]); sb += b[p];}
        if(sa != sb){puts("-1"); continue;}
        long long diff(0);
        for(long p = 0; p < n; p++){diff += (a[p] > b[p]) * (a[p] - b[p]);}
        printf("%lld\n", diff);
    }

}

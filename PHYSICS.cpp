#include <cstdio>
#include <vector>
#include <map>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long long n, f; scanf("%lld %lld", &n, &f);
        std::map<long long, long long> h;

        for(long long p = 0; p < n; p++){
            long long x; scanf("%lld", &x);
            if(h.count(x) <= 0){h[x] = 1;}
            else{++h[x];}
        }

        long long total(0);
        for(std::map<long long, long long>::iterator mapIter = h.begin(); mapIter != h.end(); mapIter++){
            long long a = mapIter->first;
            long long b = mapIter->second;

            total += b * (b - 1) / 2;
            for(long long div = f; div <= a; div *= f){
                if(a % div > 0){continue;}
                long long u = a / div;
                if(h.count(u) > 0){total += b * h[u];}
            }
        }

        printf("%lld\n", total);
    }

    return 0;
}

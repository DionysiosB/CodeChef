#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++m[x];
        }

        long long cnt(0);
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            const long long cur = it->second;
            cnt += cur * (cur - 1) / 2;
        }

        printf("%lld\n", cnt);
    }

}

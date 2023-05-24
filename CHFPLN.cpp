#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> cnt;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++cnt[x];
        }

        long res(0);
        for(std::map<long, long>::iterator it = cnt.begin(); it != cnt.end(); it++){
            long a = it->first;
            long b = it->second;
            res += (a - 1 < b) ? (a - 1) : b;
        }

        printf("%ld\n", res);
    }

}

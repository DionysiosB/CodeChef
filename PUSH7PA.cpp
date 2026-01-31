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

        long res(0);
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long key = it->first;
            long val = it->second;
            long cur = key + val - 1;
            res = (res > cur) ? res : cur;
        }

        printf("%ld\n", res);
    }

}

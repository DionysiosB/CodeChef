#include <cstdio>
#include <map>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        std::map<long, long> m;
        long n, w, wr; scanf("%ld %ld %ld", &n, &w, &wr);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++m[x];}
        long s(wr);
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long w(it->first), cnt(it->second);
            s += 2 * w * (cnt / 2);
        }

        puts(s >= w ? "YES" : "NO");
    }

}

#include <cstdio>
#include <vector>

int main(){

    const int L = 5;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(L, 1e9 + 7);
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            bool good(true);
            for(long idx = 0; idx < v.size(); idx++){
                if(v[idx] <= x){good = false; break;}
            }

            cnt += good;
            v[p % L] = x;
        }

        printf("%ld\n", cnt);
    }

}

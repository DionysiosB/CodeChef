#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev(-1),cnt(0);
        std::set<long> num, freq;
        bool res(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == prev){++cnt;}
            else{
                if(num.count(x)){res = false;}
                num.insert(x);

                if(freq.count(cnt)){res = false;}
                freq.insert(cnt);
                cnt = 1;
            }
            prev = x;
        }

        puts(res ? "YES" : "NO");
    }

    return 0;
}

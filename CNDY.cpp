#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> cnt;
        bool possible(true);
        for(long p = 0; p < 2 * n; p++){
            long x; scanf("%ld", &x);
            ++cnt[x];
            if(cnt[x] > 2){possible = false;}
        }

        puts(possible ? "Yes" : "No");
    }

}

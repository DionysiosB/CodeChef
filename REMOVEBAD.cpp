#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld" ,&n);
        std::map<long, long> cnt;
        long mx(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++cnt[x];
            mx = (mx > cnt[x]) ? mx : cnt[x];
        }

        printf("%ld\n", n - mx);
    }

}

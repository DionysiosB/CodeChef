#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> cnt;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++cnt[x];}
        long mx(0);
        for(std::map<long, long>::iterator it = cnt.begin(); it != cnt.end(); it++){long cur = it->second; mx = (mx > cur) ? mx : cur;}
        printf("%ld\n", n - mx);
    }

}

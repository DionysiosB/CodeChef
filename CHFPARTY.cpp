#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long cnt(0);
        for(long p = 0; p < n; p++){if(cnt >= a[p]){++cnt;}}
        printf("%ld\n", cnt);
    }

    return 0;
}

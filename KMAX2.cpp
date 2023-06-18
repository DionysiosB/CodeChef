#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(n); long mx(-1e9);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]); mx = (mx > v[p]) ? mx : v[p];}
        long long cnt(0); for(long p = k - 1; p < n; p++){if(v[p] == mx){cnt += n - p;}}
        printf("%lld\n", cnt);
    }

}

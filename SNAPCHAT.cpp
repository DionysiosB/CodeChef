#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n,0); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long cnt(0), mx(0);
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            if(a[p] && b){++cnt;}
            else{cnt = 0;}
            mx = (mx > cnt) ? mx : cnt;
        }

        printf("%ld\n", mx);
    }

}

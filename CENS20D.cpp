#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long cnt(0); for(long p = 0; p < n; p++){for(long q = p + 1; q < n; q++){cnt += ((a[p] & a[q]) == a[p]);}}
        printf("%ld\n", cnt);
    }

}

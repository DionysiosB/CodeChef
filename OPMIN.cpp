#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); long mn(101), cnt(0);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]); mn = (mn < v[p]) ? mn : v[p];}
        for(long p = 0; p < n; p++){cnt += (v[p] > mn);}
        printf("%ld\n", cnt);
    }

}

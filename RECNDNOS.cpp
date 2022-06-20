#include <cstdio>

int main(){

    const long D = 1007;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long f[D] = {0};
        long prev(0), cnt(1); scanf("%ld", &prev);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == prev){++cnt;}
            else{
                f[prev] += (cnt + 1) / 2;
                cnt = 1; prev = x;
            }
        }

        f[prev] += (cnt + 1) / 2;

        long which(0), mx(0);
        for(long p = 0; p < D; p++){if(f[p] > mx){mx = f[p]; which = p;}}
        printf("%ld\n", which);
    }



}

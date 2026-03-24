#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cs(0), cnt(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            cs += x;
            cnt += (cs == p);
        }

        printf("%ld\n", cnt);
    }

}

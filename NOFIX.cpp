#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0), idx(1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == idx){++cnt; ++idx;}
            ++idx;
        }

        printf("%ld\n", cnt);
    }

}

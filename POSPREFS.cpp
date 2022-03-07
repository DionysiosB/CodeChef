#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long cs(0), rem(k);
        for(long p = 1; p <= n; p++){
            long x(p);
            if((rem <= 0) || (cs > x) || ((cs == x) && (n - p >= rem) )){x = -p;}
            printf("%ld ", x);
            cs += x;
            rem -= (cs > 0);
        }

        puts("");
    }

}

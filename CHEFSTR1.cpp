#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(0);
        long prev; scanf("%ld", &prev);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            long diff = x - prev; if(diff < 0){diff = -diff;}
            res += diff - 1;
            prev = x;
        }

        printf("%ld\n", res);
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long odd(0), even(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){++odd;}
            else{++even;}
        }

        long cnt = ( ((n + 1) / 2) < even ? ((n + 1) / 2) : even ) + ( (n / 2) < odd ? (n / 2) : odd);
        printf("%ld\n", cnt);
    }

}

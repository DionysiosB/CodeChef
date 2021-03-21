#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), b(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > 2){++a;}
            else if(x == 2){++a; ++b;}
        }

        long total = a * (a - 1) / 2 - b * (b - 1) / 2;
        printf("%ld\n", total);
    }

    return 0;
}

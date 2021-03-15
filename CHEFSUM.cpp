#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e6), pos(-1);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(x < mn){mn = x; pos = p;}
        }

        printf("%ld\n", pos);
    }

    return 0;
}

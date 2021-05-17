#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); res ^= (2 * x);}
        printf("%ld\n", res);
    }

    return 0;
}

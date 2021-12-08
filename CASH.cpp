#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long res(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); res += x; res %= m;}
        printf("%ld\n", res);
    }

    return 0;
}

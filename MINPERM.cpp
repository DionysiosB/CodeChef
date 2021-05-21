#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 1; p <= n - 3 * (n % 2); p += 2){printf("%ld %ld ", p + 1, p);}
        if(n % 2){printf("%ld %ld %ld", n - 1, n, n - 2);}
        puts("");
    }

    return 0;
}

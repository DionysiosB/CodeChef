#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        for(long p = n - k; p <= n; p++){printf("%ld ", p);}
        for(long p = 1; p < n - k; p++){printf("%ld ", p);}
        puts("");
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, l; scanf("%ld %ld %ld", &n, &k, &l);
        if(k * l < n || (k == 1 && n > 1)){puts("-1"); continue;}
        for(long p = 0; p < n; p++){printf("%ld ", (p % k) + 1);}
        puts("");
    }

}

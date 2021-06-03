#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long cnt(0);
        while(n--){long x; scanf("%ld", &x); cnt += (x > 1);}
        puts(cnt <= k ? "YES" : "NO");
    }

    return 0;
}

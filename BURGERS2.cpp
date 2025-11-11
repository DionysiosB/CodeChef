#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, n, r; scanf("%ld %ld %ld %ld", &x, &y, &n, &r);
        if(n * x > r){puts("-1"); continue;}
        long d = (r - n * x) / (y - x); d = (d < n) ? d : n;
        printf("%ld %ld\n", n - d, d);
    }

}

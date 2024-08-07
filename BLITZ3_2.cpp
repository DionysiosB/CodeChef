#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        long x = 180 + 2 * ((n + 1) / 2) - a;
        long y = 180 + 2 * (n / 2) - b;
        long total = x + y; total = (total > 0) ? total : 0;
        printf("%ld\n", total);
    }   

}

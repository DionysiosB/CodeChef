#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, x, y; scanf("%ld %ld %ld %ld", &n, &m, &x, &y);
        if(n == 1 && m == 1){printf("%ld\n", x < y ? x : y); continue;}
        x = (x < y) ? x : y;
        y  = (y < 2 * x) ? y : (2 * x);
        long w((n * m + 1) / 2);
        printf("%ld\n", x * w + (y - x) * (n * m - w));
    }

}

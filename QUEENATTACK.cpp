#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
        long u = (x - y); if(u < 0){u = -u;}
        long v = (x + y); if(v > n + 1){v = 2 * (n + 1) - v;}
        long res = 2 * n + (n - u) + (v - 1) - 4;
        printf("%ld\n", res);
    }

}

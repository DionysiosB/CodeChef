#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cur(0);
        while(n--){long x; scanf("%ld", &x); cur += (x % 2); cur %= 2;}
        printf("%ld\n", (n == 1) ? 1 : (1 + cur));
    }

    return 0;
}

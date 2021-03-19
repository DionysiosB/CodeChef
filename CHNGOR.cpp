#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cost(0);
        while(n--){long x; scanf("%ld", &x); cost |= x;}
        printf("%ld\n", cost);
    }

    return 0;
}

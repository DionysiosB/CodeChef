#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long P, a, b, c, x, y; scanf("%ld %ld %ld %ld %ld %ld", &P, &a, &b, &c, &x, &y);
        long f(b + x * a), g(c + y * a);
        long cost = (f < g) ? f : g;
        printf("%ld\n", P / cost);
    }

}

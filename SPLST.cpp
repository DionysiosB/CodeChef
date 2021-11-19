#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, x, y; scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &x, &y);
        long z = (x < y) ? x : y;
        bool res = (a + b + c == x + y) && (z >= a || z >= b || z >= c);
        puts(res ? "YES" : "NO");
    }

    return 0;
}

#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long cnt(0);
    while(n--){
        long x1, y1, x2, y2, x3, y3; scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &x2, &y2, &x3, &y3);
        long d1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        long d2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
        long d3 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
        cnt += ((d1 == d2 + d3) || (d2 == d1 + d3) || (d3 == d1 + d2));
    }

    printf("%ld\n", cnt);

    return 0;
}

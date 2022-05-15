#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long xa(a / 10), ya(a % 10), xb(b / 10), yb(b % 10);
        long res(a + b), tmp(0);
        tmp = 10 * (xa + ya) + (xb + yb); res = (res > tmp) ? res : tmp;
        tmp = 10 * (xb + yb) + (xa + ya); res = (res > tmp) ? res : tmp;
        printf("%ld\n", res);
    }

}

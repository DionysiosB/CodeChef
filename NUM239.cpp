#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long cnt(0);
        long u = b % 10; cnt = (u >= 2) + (u >= 3) + (u >= 9);
        u = a % 10; cnt += (u <= 2) + (u <= 3) + (u <= 9);
        b /= 10; a = (a / 10) + 1;
        cnt += 3 * (b - a);
        printf("%ld\n", cnt);
    }

    return 0;
}

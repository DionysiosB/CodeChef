#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        while(n--){
            long x, y; scanf("%ld %ld", &x, &y);
            cnt += (y > x + 5);
        }
        printf("%ld\n", cnt);
    }

    return 0;
}

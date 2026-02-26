#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long h, x, y; scanf("%ld %ld %ld", &h, &x, &y);
        long cnt(1); h -= y;
        cnt += (h + x - 1) / x;
        printf("%ld\n", cnt);
    }

}

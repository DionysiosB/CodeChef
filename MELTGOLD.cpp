#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long cnt(0); for(cnt = 0; y < x; y += cnt , ++cnt);
        printf("%ld\n", cnt - 1);
    }

}

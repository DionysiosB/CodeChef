#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        printf("%ld\n", (x <= y) ? 0 : (x - y));
    }

    return 0;
}

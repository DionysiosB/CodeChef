#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long x = a / 2; long y = a - x;
        long z = b / 2; long w = b - z;
        long res = x * z + y * w;
        printf("%ld\n", res);
    }

}

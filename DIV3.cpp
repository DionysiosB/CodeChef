#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long z, a, t; scanf("%ld %ld %ld", &z, &a, &t);
        long f = (a < t) ? a : t; a -= f; t -= f;
        long res = z + f + (a / 3) + (t / 3);
        printf("%ld\n", res);
    }

}

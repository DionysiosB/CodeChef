#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long d, x, y, z; scanf("%ld %ld %ld %ld", &d, &x, &y, &z);
        long res = y * d + z * (7 - d);
        res = (res > 7 * x) ? res : (7 * x);
        printf("%ld\n", res);
    }

}

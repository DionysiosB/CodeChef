#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        printf("%ld\n", ((10 * x) < y ? (10 * x) : y) * z);
    }

}

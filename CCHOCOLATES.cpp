#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        printf("%ld\n", (5 * x + 10 * y) / z);
    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        long t = (y + x - 1) / x;
        printf("%ld\n", (t > z ? 0 : (z - t)));
    }   

}

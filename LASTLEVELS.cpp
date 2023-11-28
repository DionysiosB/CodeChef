#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        printf("%ld\n", x * y + (x > 3) * z * ((x - 1) / 3));
    }   

}

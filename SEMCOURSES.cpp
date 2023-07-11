#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long x, y, z; scanf("%lld %lld %lld", &x, &y, &z);
        printf("%lld\n", x * y * z);
    }   

}

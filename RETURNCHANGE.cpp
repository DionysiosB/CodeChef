#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long y = 10 * (x / 10) + 10 * (x % 10 >= 5);
        printf("%ld\n", 100 - y);
    }

}

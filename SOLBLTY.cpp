#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, a, b; scanf("%ld %ld %ld", &x, &a, &b);
        printf("%ld\n", 10 * (a + (100 - x) * b));
    }

}

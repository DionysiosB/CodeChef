#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, x; scanf("%ld %ld %ld", &a, &b, &x);
        printf("%ld\n", (b - a + x - 1) / x);
    }

}

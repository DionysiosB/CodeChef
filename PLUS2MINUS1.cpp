#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long y; scanf("%ld", &y);
        printf("%ld\n", (y > 0) ? (3 * y) : 1);
    }

}

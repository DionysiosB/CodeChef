#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        printf("%ld\n", (3 * x) <= (2 * y) ? (3 * x) : (2 * y));
    }   

}

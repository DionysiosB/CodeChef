#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        printf("%ld\n", (x < y) ? (y - x) : (  (x - y) / 2 + 2 * ((x - y) % 2) ) );
    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long res = 1500 - ((y > 2 * x) ? (6 * x + 4 * y) : (6 * y + 2 * x));
        printf("%ld\n", res);
    }   

}

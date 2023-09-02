#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long c, x, y; scanf("%ld %ld %ld", &c, &x, &y);
        printf("%ld\n", (c - x) * y);
    }   

}

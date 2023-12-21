#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        printf("%ld\n", (y + 7 - x) / 8);
    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        long dx = x1 < x2 ? (x2 - x1) : (x1 - x2);
        long dy = y1 < y2 ? (y2 - y1) : (y1 - y2);
        printf("%ld\n", dx > dy ? dx : dy);
    }   

}

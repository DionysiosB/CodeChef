#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long r1, w1, c1; scanf("%ld %ld %ld", &r1, &w1, &c1);
        long r2, w2, c2; scanf("%ld %ld %ld", &r2, &w2, &c2);
        long x = (r1 > r2) + (w1 > w2) + (c1 > c2);
        puts(x > 1 ? "A" : "B");
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        long c1 = x1 + y1;
        long c2 = x2 + y2;
        printf("%ld\n", c1 < c2 ? c1 : c2);
    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        long diff = (x2 - x1) + (y2 - y1);
        puts(diff % 2 ? "NO" : "YES");
    }

}

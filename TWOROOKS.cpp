#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x1, y1, x2, y2; scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
        puts( (x1 == x2 || y1 == y2) ? "YES" : "NO");
    }

}

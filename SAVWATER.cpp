#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long h, x, y, c; scanf("%ld %ld %ld %ld", &h, &x, &y, &c);
        puts( h * (x + y / 2) <= c ? "YES" : "NO");
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, xr, yr, D; scanf("%ld %ld %ld %ld %ld", &x, &y, &xr, &yr, &D);
        puts( ((xr * D <= x) && (yr * D <= y)) ? "YES" : "NO");
    }

}

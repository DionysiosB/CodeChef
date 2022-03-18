#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        puts((x + y == z || x + z == y || y + z == x) ? "YES" : "NO");
    }

}

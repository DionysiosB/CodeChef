#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        bool res = (x <= z && y <= z && x == y) ||  (x <= y && z <= y && x == z) || (y <= x && z <= x && y == z);
        puts(res ? "YES" : "NO");
    }

}

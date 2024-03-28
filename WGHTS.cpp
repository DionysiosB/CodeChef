#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long w, x, y, z; scanf("%ld %ld %ld %ld", &w, &x, &y, &z);
        bool res = (w == x) || (w == y) || (w == z) || (w == x + y) || w == (y + z) || w == (z + x) || w == (x + y + z);
        puts(res ? "YES" : "NO");
    }   

}

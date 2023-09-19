#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        puts(100 * y <= 107 * x ? "YES" : "NO");
    }   

}

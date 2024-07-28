#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long z, y, a, b, c; scanf("%ld %ld %ld %ld %ld", &z, &y, &a, &b, &c);
        puts((a + b + c + y <= z) ? "YES" : "NO");
    }   

}

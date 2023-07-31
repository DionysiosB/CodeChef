#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        puts((x > 0 && x == y) ? "YES" : "NO");
    }   

}

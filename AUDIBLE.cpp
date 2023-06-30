#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        puts((67 <= x && x <= 45000) ? "YES" : "NO");
    }   

}

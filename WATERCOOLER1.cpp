#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, m; scanf("%ld %ld %ld", &x, &y, &m);
        puts((m * x < y) ? "YES" : "NO");
    }   

}

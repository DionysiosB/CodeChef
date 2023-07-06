#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
        puts(x + 2 * y <= n ? "YES" : "NO");
    }   

}

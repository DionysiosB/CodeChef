#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        puts(((10000 <= n * x) && (n * x < 100000)) ? "YES" : "NO");
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        puts(m * n % 2 ? "NO" : "YES");
    }

    return 0;
}

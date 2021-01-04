#include <cstdio>
 
int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long n, m; scanf("%ld %ld", &n, &m);
        --n; --m; n -= m % 3;
        puts(n % 4 ? "Tuzik" : "Vanya");
    }
 
    return 0;
}

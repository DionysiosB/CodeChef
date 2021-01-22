#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long n, m; scanf("%lld %lld", &n, &m);
        printf("%lld\n", (n > m) ? (n - m) : (m - n));
    }

    return 0;
}

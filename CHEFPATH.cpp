#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long n, m; scanf("%lld %lld", &n, &m);
        puts(  ((n == 1 && m > 3) || (m == 1 && n > 3) || ((n % 2) && (m % 2))) ? "No" : "Yes");
    }

    return 0;
}

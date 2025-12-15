#include <cstdio>

long gcd(long a, long b){return (a == 0) ? b : gcd(b % a, a);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        printf("%ld\n", gcd(n, m));
    }

}

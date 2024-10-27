#include <cstdio>

long gcd(long a, long b){return (a == 0) ? b : gcd(b % a, a);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long b, c; scanf("%ld %ld", &b, &c);
        printf("%ld\n", c / gcd(b, c));
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a; scanf("%ld %ld", &n, &a);
        long mult(1); for(long p = 1; p * p <= n; p++){mult = p;}
        printf("%ld\n", mult * a);
    }

}

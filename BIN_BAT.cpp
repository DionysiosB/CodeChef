#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        long res(-b);
        while(n > 1){res += (a + b); n /= 2;}
        printf("%ld\n", res);
    }

}

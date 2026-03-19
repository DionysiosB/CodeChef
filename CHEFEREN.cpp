#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        long dur = a * (n / 2) + b * ((n + 1) / 2);
        printf("%ld\n", dur);
    }

}

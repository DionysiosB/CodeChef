#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long div(n / k), mod(k);
        if(n % k){++div; mod = n % k;}
        printf("%ld %ld\n", div, mod);
    }

}

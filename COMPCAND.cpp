#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        printf("%ld\n", (n % k) ? (-1) : (n / k));
    }

}

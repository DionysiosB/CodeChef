#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, k; scanf("%ld %ld %ld", &n, &x, &k);
        printf("%ld\n", (k / x) < n ? (k / x) : n);
    }   

}

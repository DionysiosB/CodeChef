#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, x, y; scanf("%ld %ld %ld %ld", &n, &k, &x, &y);
        printf("%ld\n", k * x + (n - k) * (x < y ? x : y));
    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, n; scanf("%ld %ld", &x, &n);
        printf("%ld\n", x * n / 10);
    }   

}

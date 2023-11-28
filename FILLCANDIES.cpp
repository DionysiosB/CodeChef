#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, m; scanf("%ld %ld %ld", &n, &k, &m);
        printf("%ld\n", (n + k * m - 1) / (k * m));
    }   

}

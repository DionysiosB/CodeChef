#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, s; scanf("%ld %ld %ld", &n, &k, &s);
        s -= n * n; s /= (k - 1);
        printf("%ld\n", s);
    }

}

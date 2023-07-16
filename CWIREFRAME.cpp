#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, x; scanf("%ld %ld %ld", &n, &m, &x);
        printf("%ld\n", 2 * x * (m + n));
    }   

}

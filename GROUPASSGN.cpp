#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        printf("%ld\n", 2 * n + 1 - x);
    }   

}

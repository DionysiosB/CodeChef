#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a; scanf("%ld %ld", &n, &a);
        printf("%ld\n", 2 * a < n ? a : (n - a));
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, l, x; scanf("%ld %ld %ld", &n, &l, &x);
        printf("%ld\n", x * ((l < n - l) ? l : (n - l)));
    }

}

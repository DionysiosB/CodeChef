#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0); while(n){cnt += (n % 2); n /= 2;}
        printf("%ld\n", cnt - 1);
    }

}

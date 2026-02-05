#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long odd(0); for(long p = 0; p < n; p++){long b; scanf("%ld", &b); odd += b;}
        puts( ((n - odd) % 2) ? "NO" : "YES");
    }

}

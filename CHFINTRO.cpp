#include <cstdio>

int main(){

    long n, r; scanf("%ld %ld", &n, &r);
    while(n--){
        long x; scanf("%ld", &x);
        puts(x >= r ? "Good boi" : "Bad boi");
    }

}

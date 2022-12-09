#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, p; scanf("%ld %ld %ld", &n, &x, &p);
        puts(4 * x >= n + p ? "PASS" : "FAIL");
    }

}

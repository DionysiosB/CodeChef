#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b, c; scanf("%ld %ld %ld %ld", &n, &a, &b, &c);
        puts(((b >= n) && ((a + c) >= n)) ? "YES" : "NO");
    }

}

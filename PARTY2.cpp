#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, k; scanf("%ld %ld %ld", &n, &x, &k);
        puts((n * x <= k) ? "YES" : "NO");
    }   

}

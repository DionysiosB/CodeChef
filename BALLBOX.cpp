#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        puts(n >= k * (k + 1) / 2 ? "YES" : "NO");
    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        puts(n + 1 <= k ? "YES" : "NO");
    }   

}

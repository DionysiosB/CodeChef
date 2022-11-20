#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long m, n, k; scanf("%ld %ld %ld", &m, &n, &k);
        puts(k * n < m ? "YES" : "NO");
    }

}

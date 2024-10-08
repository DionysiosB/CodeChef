#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        puts((n % 2 == 0 || k == 1) ? "Yes" : "No");
    }

}

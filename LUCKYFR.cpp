#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res(0);
        while(n){res += (n % 10 == 4); n /= 10;}
        printf("%ld\n", res);
    }

}

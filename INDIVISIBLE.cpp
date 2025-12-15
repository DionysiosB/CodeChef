#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long res(0);
        for(long p = 99; !res && p > 1; p--){
            if(a % p && b % p && c % p){res = p; break;}
        }

        printf("%ld\n", res);
    }

}

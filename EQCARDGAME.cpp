#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k; scanf("%ld", &k);
        long res(0); for(long p = 1; p * k <= 52; res = p * k, p++);
        printf("%ld\n", 52 - res);
    }

}

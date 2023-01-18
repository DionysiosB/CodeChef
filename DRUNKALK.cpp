#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k; scanf("%ld", &k);
        printf("%ld\n", 2 * (k / 2) + 3 * (k % 2));
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r, k; scanf("%ld %ld %ld", &l, &r, &k);
        printf("%ld\n", (l == r) ? 1 : k);
    }

}

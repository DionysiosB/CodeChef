#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long g, c; scanf("%ld %ld", &g, &c);
        printf("%ld\n", (c * c) / (2 * g));
    }

}

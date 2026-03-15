#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long g, b; scanf("%ld %ld", &g, &b);
        printf("%ld\n", b - g);
    }

}

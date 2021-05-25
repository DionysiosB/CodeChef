#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long d; scanf("%ld", &d);
        printf("%ld\n", (d % 9) + 1);
    }

    return 0;
}

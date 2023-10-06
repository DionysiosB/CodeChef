#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        printf("%ld\n", (3 - x % 3) % 3);
    }   

}

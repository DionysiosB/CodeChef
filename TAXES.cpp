#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        printf("%ld\n", (x > 100) ? (x - 10) : x);
    }   

}

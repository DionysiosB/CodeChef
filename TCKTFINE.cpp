#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, p, q; scanf("%ld %ld %ld", &x, &p, &q);
        printf("%ld\n", x * (p - q));
    }   

}

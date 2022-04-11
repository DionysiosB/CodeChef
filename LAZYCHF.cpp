#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, m, d; scanf("%ld %ld %ld", &x, &m, &d);
        printf("%ld\n", (m * x < x + d) ? m * x : x + d);
    }

}

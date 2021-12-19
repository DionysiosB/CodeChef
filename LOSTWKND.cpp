#include <cstdio>

int main(){

    const long H = 24;
    const long D = 5;

    long t; scanf("%ld", &t);
    while(t--){
        long s(0);
        for(long p = 0; p < D; p++){long x; scanf("%ld", &x); s += x;}
        long mult(0); scanf("%ld", &mult); s *= mult;
        puts(s > D * H ? "Yes" : "No");
    }

    return 0;
}

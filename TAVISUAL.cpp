#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, c, q; scanf("%ld %ld %ld", &n, &c, &q);
        while(q--){
            long L, R; scanf("%ld %ld", &L, &R);
            if(c < L || c > R){continue;}
            c = L + R - c;
        }

        printf("%ld\n", c);
    }

    return 0;
}

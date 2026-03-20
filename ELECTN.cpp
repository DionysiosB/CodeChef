#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long cnt(0);
        while(n--){long u; scanf("%ld", &u); cnt += (u >= x);}
        printf("%ld\n", cnt);
    }

}

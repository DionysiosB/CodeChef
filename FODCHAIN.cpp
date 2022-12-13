#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, k; scanf("%ld %ld", &x, &k);
        long cnt(0); while(x){++cnt; x /= k;}
        printf("%ld\n", cnt);
    }

}

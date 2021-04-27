#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long cnt(0);
        while((a & (a - 1)) != 0){a /= 2; ++cnt;}
        while(a < b){a *= 2; ++cnt;}
        while(a > b){a /= 2; ++cnt;}
        printf("%ld\n", cnt);
    }

    return 0;
}

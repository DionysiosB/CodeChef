#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    
    const long B = 10;
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        long cnt(0);
        for(long p = 1; p < B; p++){cnt += ((a <= p && p <= b) || (c <= p && p <= d));}
        printf("%ld\n", cnt);
    }

}

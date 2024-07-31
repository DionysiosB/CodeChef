#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long cnt(0), z(0);
        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            cnt += (x < 0);
            z = z | (x == 0);
        }

        printf("%ld\n", (1 - z) * (cnt % 2));
    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long cnt(8);
        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            cnt += (x % 7 != 6) && (x % 7 != 0);
        }

        printf("%ld\n", cnt);
    }   

}

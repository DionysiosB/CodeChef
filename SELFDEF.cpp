#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            cnt += (x >= 10 && x <= 60);
        }
        printf("%ld\n", cnt);
    }   

}

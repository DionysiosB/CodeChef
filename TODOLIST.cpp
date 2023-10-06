#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        for(long p = 0; p < n; p++){
            long d; scanf("%ld", &d);
            cnt += (d >= 1000);
        }
        printf("%ld\n", cnt);
    }   

}

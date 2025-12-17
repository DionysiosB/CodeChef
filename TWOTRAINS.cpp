#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mx(0), total(0);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            total += x;
            mx = (mx > x) ? mx : x;
        }

        total += mx;
        printf("%ld\n", total);
    }

}

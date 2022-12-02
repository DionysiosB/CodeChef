#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long pos(0), neg(0);
        while(n--){
            long x; scanf("%ld", &x);
            pos += (x > 0); neg += (x < 0);
        }

        long mn = (pos < neg ? pos : neg);
        long mx = (pos > neg ? pos : neg);

        if(pos && neg){printf("%ld %ld\n", mx, mn);}
        else{printf("%ld %ld\n", mx, mx);}
    }

}

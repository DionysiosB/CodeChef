#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e9 + 7), mx(-1e9 - 7); bool flag(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < mn){mn = x; flag = 1;}
            if(x > mx){mx = x; flag = 0;}
        }

        if(flag){long tmp = mn; mn = mx; mx = tmp;}
        printf("%ld %ld\n", mn, mx);
    }

}

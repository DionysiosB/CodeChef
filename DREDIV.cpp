#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        while(k % 2 == 0){k /= 2;}
        bool res(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % k){res = false;}
        }

        puts(res ? "YES" : "NO");
    }

}

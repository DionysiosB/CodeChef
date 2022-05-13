#include<cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long z(0), w(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            z += (x == 0); w += (x == 2);
        }

        long res = z * (z - 1) / 2 + w * (w - 1) / 2;
        printf("%ld\n", res);
    }

}

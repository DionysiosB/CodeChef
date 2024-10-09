#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x, c; scanf("%ld %ld %ld", &n, &x, &c);
        long res(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            res += (a + c < x) ? (x - c) : a;
        }

        printf("%ld\n", res);
    }

}

#include<cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long res(0);
        for(long p = 0; p < n; p++){
            long h; scanf("%ld", &h);
            res += (h > k);
        }

        printf("%ld\n", res);
    }

}

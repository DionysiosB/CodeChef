#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long mx(x), cur(x);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            cur += a; 
            mx = (mx > cur) ? mx : cur;
        }

        printf("%ld\n", mx);
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long res(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(x > a){res = p + 1;}
        }

        printf("%ld\n", res);
    }   

}

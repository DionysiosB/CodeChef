#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long rem(7), res(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(res){continue;}
            if(1 <= x && x <= 7){--rem;}
            if(rem <= 0){res = p + 1;}
        }

        printf("%ld\n", res);
    }

}

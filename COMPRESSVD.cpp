#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev; {scanf("%ld", &prev);}

        long rem(0);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == prev){++rem;}
            prev = x;
        }

        printf("%ld\n", n - rem);
    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool run(true);
        long dist(0), gas(0); scanf("%ld", &gas);
        for(long p = 1; p < n; p++){
            if(gas < 0){run = false;}
            long x; scanf("%ld", &x);
            if(run){gas += x - 1; ++dist;}
        }

        printf("%ld\n", gas + dist);
    }

}

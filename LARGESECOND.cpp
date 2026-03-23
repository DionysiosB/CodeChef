#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long fm(0), fs(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > fm){fs = fm; fm = x;}
            else if(fs < x && x < fm){fs = x;}
        }

        printf("%ld\n", fs + fm);
    }

}

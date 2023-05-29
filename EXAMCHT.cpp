#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(a == b){puts("-1"); continue;}
        a -= b; if(a < 0){a = -a;}
        long cnt(0);
        for(long p = 1; p * p <= a; p++){
            if(a % p){continue;}
            cnt += 1 + (p * p != a);
        }

        printf("%ld\n", cnt);
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long left, right; scanf("%ld %ld", &left, &right);
        long res(0);
        for(long p = right + 1 + (right % 2); p <= 1e9; p++){
            if(p % 2 == 0){continue;}
            bool isprime(true);
            for(long div = 3; div * div <= p; div += 2){if(p % div == 0){isprime = false; break;}}
            if(isprime){res = p; break;}
        }

        printf("%ld\n", res);
    }

}

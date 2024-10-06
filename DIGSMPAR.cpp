#include <cstdio>

int digitsum(long x){
    long s(0); 
    while(x){s += x % 10; x /= 10;}
    return s;
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long ds = digitsum(n);
        long res(n + 1);
        for(long p = n + 1; p < n + 1000; p++){
            long tst = digitsum(p);
            if(tst % 2 != ds % 2){res = p; break;}
        }

        printf("%ld\n", res);
    }

}


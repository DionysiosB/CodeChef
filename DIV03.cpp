#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a[11] = {0}; for(long p = 1; p <= 10; p++){scanf("%ld", &a[p]);}
        long k; scanf("%ld", &k);
        long idx(10);
        for(long p = 10; p > 0; p--){
            if(a[p] <= k){k -= a[p]; a[p] = 0;}
            else{idx = p; break;}
        }

        printf("%ld\n", idx);
    }

}

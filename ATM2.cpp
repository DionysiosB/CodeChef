#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x <= k){printf("1"); k -= x;}
            else{printf("0");}
        }
        puts("");
    }

    return 0;
}

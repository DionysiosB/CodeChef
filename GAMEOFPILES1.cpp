#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0); bool one(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s += x; s %= 2;
            if(x == 1){one = true;}
        }

        if(one || (s % 2)){puts("CHEF");}
        else{puts("CHEFINA");}
    }

}

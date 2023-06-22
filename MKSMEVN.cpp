#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool two(false);
        long s(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s += (x % 2);
            if(x == 2){two = true;}
        }

        if(s % 2 == 0){puts("0");}
        else if(two){puts("1");}
        else{puts("-1");}
    }

}

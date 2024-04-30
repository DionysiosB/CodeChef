#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a(0), b(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            (x > 0) ? (++a) : (++b);
        }

        if(n % 2){puts("-1");}
        else{
            long res = (b - a) / 2; if(res < 0){res = -res;}
            printf("%ld\n", res);
        }
    }   

}

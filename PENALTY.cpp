#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a(0), b(0);
        for(long p = 0; p < 10; p++){
            long x; scanf("%ld", &x);
            (p % 2) ? (b += x) : (a += x);
        }

        if(a == b){puts("0");}
        else{printf("%d\n", 1 + (b > a));}
    }

}

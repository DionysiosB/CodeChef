#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e6), mx(0); bool possible(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < mn){mn = x;}
            if(x > mx){mx = x;}
            if(x != mn && x != mx){possible = false;}
        }

        puts(possible ? "YES" : "NO");

    }

}

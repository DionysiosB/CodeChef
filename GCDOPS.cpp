#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool ans(true);
        for(long p = 1; p <= n; p++){
            long b; scanf("%ld", &b);
            if(p % b){ans = false;}
        }
        puts(ans ? "YES" : "NO");
    }
}

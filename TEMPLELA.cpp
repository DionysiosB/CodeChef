#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool valid(n & 1);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(2 * p < n){if(x != p){valid = false;}}
            else{if(x != n + 1 - p){valid = false;}}
        }

        puts(valid ? "yes" : "no");
    }

    return 0;
}

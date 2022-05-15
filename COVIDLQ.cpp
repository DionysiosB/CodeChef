#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool ans(true); long prev(-11);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(x){if(p < prev + 6){ans = false;} prev = p;}
        }

        puts(ans ? "YES" : "NO");
    }

}

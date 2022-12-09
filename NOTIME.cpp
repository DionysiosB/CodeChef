#include <cstdio>

int main(){

    long n, h, x; scanf("%ld %ld %ld", &n, &h, &x);
    bool ans(false);
    for(long p = 0; p < n; p++){
        long t; scanf("%ld", &t);
        if(t + x >= h){ans = true;}
    }

    puts(ans ? "YES" : "NO");

}

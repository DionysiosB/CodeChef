#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, d, h; scanf("%ld %ld %ld", &n, &d, &h);
        long s(0); bool res(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x){s += x;}
            else{s -= d; s = (s > 0) ? s : 0;}
            if(s > h){res = true;}
        }

        puts(res ? "YES" : "NO");
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long amin, bmin, cmin, smin, a, b, c; scanf("%ld %ld %ld %ld %ld %ld %ld", &amin, &bmin, &cmin, &smin, &a, &b, &c);
        bool res = (a >= amin) && (b >= bmin) && (c >= cmin) && (a + b + c >= smin);
        puts(res ? "YES" : "NO");
    }

}

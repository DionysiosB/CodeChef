#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n = 100;
        long cnt(0);
        while(n--){long x; scanf("%ld", &x); cnt += (x <= 30);}
        puts(cnt >= 60 ? "yes" : "no");
    }

    return 0;
}

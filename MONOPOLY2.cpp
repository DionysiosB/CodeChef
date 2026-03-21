#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long p, q, r, s; scanf("%ld %ld %ld %ld", &p, &q, &r, &s);
        bool res = (p > q + r + s) || (q > p + r + s) || (r > p + q + s) || (s > p + q + r);
        puts(res ? "YES" : "NO");
    }

}

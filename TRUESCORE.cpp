#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        puts((a <= c && b <= d) ? "POSSIBLE" : "IMPOSSIBLE");
    }   

}

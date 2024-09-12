#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d, e; scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &d, &e);
        bool possible = (a + b <= d && c <= e) || (a + c <= d && b <= e) || (b + c <= d && a <= e) ;
        puts(possible ? "YES" : "NO");
    }

}

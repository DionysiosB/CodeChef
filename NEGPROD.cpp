#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        bool res = (a * b < 0) || (a * c < 0) || (b * c < 0);
        puts(res ? "YES" : "NO");
    }

}

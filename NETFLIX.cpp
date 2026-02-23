#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, x; scanf("%ld %ld %ld %ld", &a, &b, &c, &x);
        bool res = (a + b >= x) || (a + c >= x) || (b + c >= x);
        puts(res ? "YES" : "NO");
    }

}

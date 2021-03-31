#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s(0); while(n--){long x; scanf("%ld", &x); s += x; s %= 2;}
        puts(s ? "YES" : "NO");
    }

    return 0;
}

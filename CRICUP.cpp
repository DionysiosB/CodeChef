#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, d; scanf("%ld %ld %ld", &x, &y, &d);
        long res = x - y; if(res < 0){res = -res;}
        puts(res <= d ? "YES" : "NO");
    }   

}

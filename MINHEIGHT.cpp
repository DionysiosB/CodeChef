#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, h; scanf("%ld %ld", &x, &h);
        puts(x >= h ? "YES" : "NO");
    }   

}

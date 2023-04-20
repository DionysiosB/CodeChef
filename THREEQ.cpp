#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a(0); for(long p = 0; p < 3; p++){long x; scanf("%ld", &x); a += x;}
        long b(0); for(long p = 0; p < 3; p++){long x; scanf("%ld", &x); b += x;}
        puts(a == b ? "Pass" : "Fail");
    }


}

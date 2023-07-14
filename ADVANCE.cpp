#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        puts((x <= y && y <= x + 200) ? "YES" : "NO");
    }   

}

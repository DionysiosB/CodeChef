#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long s = (a % 2) + (b % 2) + (c % 2);
        puts((0 < s && s < 3) ? "YES" : "NO");
    }   

}

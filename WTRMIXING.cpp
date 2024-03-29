#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, x, y; scanf("%ld %ld %ld %ld", &a, &b, &x, &y);
        bool res = (b <= a && y >= a - b) || (a <= b && x >= b - a);
        puts(res ? "YES" : "NO");
    }   

}

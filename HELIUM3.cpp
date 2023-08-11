#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, x, y; scanf("%ld %ld %ld %ld", &a, &b, &x, &y);
        puts((a * b <= x * y) ? "Yes" : "No");
    }   

}

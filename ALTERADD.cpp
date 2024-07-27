#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        puts((b - a - 2) % 3 ? "YES" : "NO");
    }   

}

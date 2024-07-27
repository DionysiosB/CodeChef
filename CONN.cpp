#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool res = (n == 2) || (n == 4) || (n >= 6);
        puts(res ? "YES" : "NO");
    }   

}

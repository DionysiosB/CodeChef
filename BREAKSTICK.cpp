#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        bool possible = (n % 2 == 0) || (x % 2 == 1 && (n >= x + 2)); 
        puts(possible ? "YES" : "NO");
    }

}

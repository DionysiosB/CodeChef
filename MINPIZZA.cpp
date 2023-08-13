#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        printf("%ld\n", (n * x + 3) / 4);
    }   

}

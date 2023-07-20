#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        printf("%ld\n", 10 * (x > 300 ? x : 300));
    }   

}

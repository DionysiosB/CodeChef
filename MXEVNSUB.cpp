#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long diff = (n % 4 == 1) || (n % 4 == 2);
        printf("%ld\n", n - diff);
    }

}

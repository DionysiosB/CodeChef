#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    for(long p = 10; p > 0; p--){
        if(n % p){continue;}
        printf("%ld\n", p);
        break;
    }
}

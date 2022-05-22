#include <cstdio>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        if(gcd(x, y) > 1){puts("0");}
        else if(gcd(x + 1, y) > 1 || gcd(x, y + 1) > 1){puts("1");}
        else{puts("2");}
    }

}

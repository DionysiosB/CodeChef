#include <cstdio>

long reverse(long x){

    long y(0);
    while(x % 10 == 0){x /= 10;}
    while(x > 0){y = 10 * y + (x % 10); x /= 10;}
    return y;
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        printf("%ld\n", reverse(reverse(a) + reverse(b)));
    }

    return 0;
}

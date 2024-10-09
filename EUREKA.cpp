#include <iostream>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long long res = pow(0.143 * n, n) + 0.5;
        printf("%lld\n", res);
    }

}

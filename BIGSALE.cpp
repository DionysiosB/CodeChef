#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        double loss(0.0);
        for(long p = 0; p < n; p++){
            long price, quantity, dc; scanf("%ld %ld %ld\n", &price, &quantity, &dc);
            loss += quantity * price * dc * dc / 10000.0;
        }

        printf("%.4lf\n", loss);
    }

    return 0;
}

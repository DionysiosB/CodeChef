#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        long long total(0);
        for(long p = a; p <= b; p++){
            long x = p + 1;
            if(x > d){break;}
            long u = (x > c) ? x : c;
            long diff = d - u + 1;
            if(diff > 0){total += diff;}
        }

        printf("%lld\n", total);
    }

    return 0;
}

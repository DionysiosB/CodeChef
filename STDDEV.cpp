#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, sigma; scanf("%ld %ld", &n, &sigma);
        if(n == 1){puts(sigma == 0 ? "0" : "-1"); continue;}
        double s = sigma;
        if(n & 1){printf("0 "); s *= sqrt(1.0 * n / (n - 1));}
        n /= 2;
        for(long p = 0; p < n; p++){printf("%.4lf %.4lf ", s, -s);}
        puts("");
    }

    return 0;
}

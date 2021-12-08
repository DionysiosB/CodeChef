#include <cstdio>

int main(){

    const long double PI = 3.141592653589793238462643383;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long double s; for(long p = 0; p < n; p++){long double a; scanf("%Lf", &a); s += a;}
        long double res = s / (PI * 10.0 * n);
        printf("%.15Lf\n", res);
    }

    return 0;
}

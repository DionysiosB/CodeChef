#include <cstdio>

long gcd(long a, long b){return (a == 0) ? b : gcd(b % a, a);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long g(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); g = gcd(x, g);}


        long f = g;
        for(long u = 1; u <= k; u++){
            if(g <= 1){break;}
            if(u * u > f){break;}
            if(g % u != 0){continue;}
            long v = g / u;
            while((u > 1) && (u <= k) && (g % u == 0)){g /= u;}
            while((v > 1) && (v <= k) && (g % v == 0)){g /= v;}
        }

        puts(g == 1 ? "YES" : "NO");
    }

    return 0;
}

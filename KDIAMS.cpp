#include <cstdio>
#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(k == n * (n - 1) / 2){
            printf("%ld\n", k);
            for(long p = 1; p <= n; p++){for(long q = 1; q <= n; q++){printf("%ld %ld\n", p, q);}}
            continue;
        }
        else if(k > (n - 1) * (n - 2) / 2){puts("-1"); continue;}

        long a(1);
        for(long p = 2; p * p <= k; p++){if(k % p == 0){a = p;}}
        long b = k / a;
        if(a + b + 1 > n){puts("-1"); continue;}

        printf("%ld\n", n - 1);
        for(long p = 1; p <= a; p++){printf("%ld %ld\n", p, a + 1);}
        for(long p = a + 1; p < n - b; p++){printf("%ld %ld\n", p, p + 1);}
        for(long p = n - b + 1; p <= n; p++){printf("%ld %ld\n", n - b, p);}
    }
}

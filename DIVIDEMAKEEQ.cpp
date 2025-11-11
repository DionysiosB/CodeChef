#include <cstdio>
#include <vector>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long g(0);
        std::vector<long> a(n, 0); 
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            g = gcd(g, a[p]);
        }

        long cnt(0);
        for(long p = 0; p < n; p++){cnt += (a[p] != g);}
        printf("%ld\n", cnt);
    }

}

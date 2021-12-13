#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f(n + 1, 0);
        for(long p = 1; p <= n; p++){long a; scanf("%ld", &a); f[p] = f[p - 1] + (a % 2 == 0);}
        long q; scanf("%ld", &q);
        while(q--){
            long left, right; scanf("%ld %ld", &left, &right);
            puts(f[right] > f[left - 1] ? "EVEN" : "ODD");
        }
    }

    return 0;
}

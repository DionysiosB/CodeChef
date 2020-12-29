#include <cstdio>
#include <iostream>
#include <vector>

int64_t gcd(int64_t a, int64_t b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        std::vector<int64_t> a(n, 0);
        for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}

        int64_t res = 5e18;
        for(int64_t x = 0; x < n; x++){
            for(int64_t y = x + 1; y < n; y++){
                int64_t lcm = a[x] * a[y] / gcd(a[x], a[y]);
                res = (res < lcm) ? res : lcm;
            }
        }

        printf("%lld\n", res);
    }

    return 0;
}

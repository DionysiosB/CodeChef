#include <iostream>

int64_t gcd(int64_t a, int64_t b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        int64_t a, b, c, d, k; std::cin >> a >> b >> c >> d >> k;
        int64_t gba = gcd(a, b);
        int64_t gdc = gcd(c, d);
        int64_t g = gcd(gba, gdc);

        int64_t res(1);
        if(1.0 * gba * gdc / g <= k + 1){res = 2 * (k / (gba / g * gdc)) + 1;}
        std::cout << res << std::endl;
    }
   
    return 0;
}

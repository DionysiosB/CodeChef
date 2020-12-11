#include <iostream>

int64_t modexp(int64_t base, int64_t exp, int64_t mod){

    if(exp == 0){return 1;}
    else if(base <= 0){return 0;}

    base %= mod;
    int64_t part = modexp(base, exp / 2, mod);
    int64_t ans = (((exp % 2) ? (base % mod) : 1) * (((part % mod) * (part % mod)) % mod)) % mod;
    return ans;
}


int main(){

    const int64_t MOD = 1000000007;

    int t; scanf("%d", &t);
    while(t--){
        long n; std::cin >> n;
        int64_t total = ((((n % 2) ? 4 : 3) * modexp(2, n / 2, MOD)) - 2) % MOD;
        std::cout << total << std::endl;
    }

    return 0;
}

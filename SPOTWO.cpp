#include <cstdio>
#include <iostream>
#include <vector>

uint64_t decbindec(uint64_t x){
    std::vector<bool> bin;
    while(x > 0){bin.push_back(x % 2); x /= 2;}
    uint64_t f(0);
    for(int p = bin.size() - 1; p >= 0; p--){f = 10 * f + bin[p];}
    return f;
}

uint64_t powermod(uint64_t base, uint64_t exp, uint64_t mod){
    if(exp == 0){return 1;}
    uint64_t part = powermod(base, exp / 2, mod) % mod;
    uint64_t res = (((exp % 2) ? base : 1) * ((part * part) % mod)) % mod;
    return res;
}


int main(){

    const uint64_t MOD = 1000000007; 
    long t; scanf("%ld", &t);
    while(t--){
        uint64_t n; scanf("%llu", &n);
        uint64_t f = powermod(2, decbindec(n), MOD) % MOD;
        f = (f * f) % MOD;
        printf("%llu\n", f);
    }

    return 0;
}

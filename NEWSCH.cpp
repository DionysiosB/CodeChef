#include <iostream>

int64_t modexp(int64_t base, int64_t exp, int64_t M){

    if(exp <= 0){return 1;}
    int64_t part = modexp(base, exp / 2, M);
    int64_t res = ((exp % 2 ? base : 1) * ((part * part) % M)) % M;
    return res;
}


int main(){

    const int64_t B = 4;
    const int64_t MOD = 1e9 + 7;

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        int64_t n; std::cin >> n;
        int64_t ans = modexp(B - 1, n, MOD) + (B - 1) * ((n % 2) ? (-1) : 1);
        std::cout << ans << std::endl;
    }

    return 0;
}

#include<iostream>
#include<algorithm>

int main(){

    const int64_t MOD = 1000000007;
    int64_t t; scanf("%lld", &t);
    int64_t ans(1);
    int64_t n[3] = {0};
    while(t--){

        scanf("%lld %lld %lld", &n[0], &n[1], &n[2]);
        std::sort(n,n + 3);
        ans= ((n[0] % MOD)*( (n[1] - 1) % MOD)) % MOD;
        ans *= ((n[2]-2) % MOD) % MOD;
        printf("%lld\n", ans);   
        
    }

    return 0;
} 

#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        long n, k, ans; std::cin >> n >> k >> ans;
        std::vector<long> a(n); for(long p = 0; p < n; p++){std::cin >> a[p];}
        std::string op; std::cin >> op;
        if((k > 0) && op == "AND"){for(long p = 0; p < n; p++){ans &= a[p];}}
        else if((k > 0) && op == "OR"){for(long p = 0; p < n; p++){ans |= a[p];}}
        else if((k % 2) && op == "XOR"){for(long p = 0; p < n; p++){ans ^= a[p];}}
        std::cout << ans << std::endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

int main(){

    const long N = 26;
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::vector<long> price(N, 0); for(long p = 0; p < N; p++){std::cin >> price[p];}
        std::vector<bool> lt(N, 0);
        std::string s; std::cin >> s;
        for(long p = 0; p < s.size(); p++){lt[s[p] - 'a'] = true;}
        long total(0);
        for(long p = 0; p < N; p++){total += lt[p] ? 0 : price[p];}
        std::cout << total << std::endl;
    }

    return 0;
}

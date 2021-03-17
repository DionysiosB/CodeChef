#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int N = 26;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<long> f(N, 0);
        long n = s.size() / 2;
        for(long p = 0; 2 * p < s.size(); p++){
            ++f[s[p] - 'a'];
            --f[s[s.size() - 1 - p] - 'a'];
        }

        bool ans(true);
        for(long p = 0; p < N; p++){if(f[p]){ans = false;}}
        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

    return 0;
}

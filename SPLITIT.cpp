#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool possible(false);
        for(long p = 0; p + 1 < n; p++){if(s[p] == s[n - 1]){possible = true; break;}}
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }
}

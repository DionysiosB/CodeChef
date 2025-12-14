#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        bool same(true);
        for(long p = 0; same && p < s.size(); p += 2){if(s[p] != s[0]){same = false;}}
        for(long p = 1; same && p < s.size(); p += 2){if(s[p] != s[1]){same = false;}}
        std::cout << (same ? "YES" : "NO") << std::endl;
    }

}

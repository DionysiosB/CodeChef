#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s, t; std::cin >> s >> t;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += (s[p] == '1');}
        for(long p = 0; p < t.size(); p++){cnt -= (t[p] == '1');}
        std::cout << (cnt ? "NO" : "YES") << std::endl;
    }

}

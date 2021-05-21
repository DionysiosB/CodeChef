#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long sum(0);
        for(long p = 0; p < s.size(); p++){sum += ('0' <= s[p] && s[p] <= '9') * (s[p] - '0');}
        std::cout << sum << std::endl;
    }

    return 0;
}
